#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::database("myConnection");

    model = new QSqlRelationalTableModel(this, db);
    model->setTable("movies");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setRelation(5, QSqlRelation("directors", "id", "name"));
    model->setRelation(6, QSqlRelation("genres", "id", "name"));
    model->setSort(0, Qt::AscendingOrder);


    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);



    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Tytuł");
    model->setHeaderData(2, Qt::Horizontal, "Ocena");
    model->setHeaderData(3, Qt::Horizontal, "Rok produkcji");
    model->setHeaderData(4, Qt::Horizontal, "Czas trwania");
    model->setHeaderData(5, Qt::Horizontal, "Reżyser");
    model->setHeaderData(6, Qt::Horizontal, "Gatunek");

    ui->tableView->resizeColumnsToContents();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);

    m_addScreen = new addScreen(this);
    m_filterScreen = new filterScreen(this);
    m_deleteScreen = new deleteScreen(this);;
    m_editScreen = new editScreen(this);;
    m_sortScreen = new sortScreen(this);;
    m_searchScreen = new searchScreen(this);;
    m_statScreen = new statScreen(this);;

    ui->stackedWidget->addWidget(m_addScreen);
    ui->stackedWidget->addWidget(m_deleteScreen);
    ui->stackedWidget->addWidget(m_editScreen);
    ui->stackedWidget->addWidget(m_searchScreen);
    ui->stackedWidget->addWidget(m_sortScreen);
    ui->stackedWidget->addWidget(m_filterScreen);
    ui->stackedWidget->addWidget(m_statScreen);

    connect(m_addScreen, &addScreen::movieAdded, [this]() {this->model->select(); });
    connect(m_deleteScreen, &deleteScreen::movieDeleted, [this]() {this->model->select(); });
    connect(m_editScreen, &editScreen::movieEdited, [this]() {this->model->select(); });
    connect(m_searchScreen, &searchScreen::searchRequested, this, &MainWindow::applySearchFilter);
    connect(m_sortScreen, &sortScreen::sortRequested, this, &MainWindow::applySort);
    connect(m_filterScreen, &filterScreen::filterRequested, this, &MainWindow::applyFilters);

    model->select();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::updateButtons(QPushButton* clickedButton) {
    ui->addButton->setEnabled(true);
    ui->deleteButton->setEnabled(true);
    ui->editButton->setEnabled(true);
    ui->sortButton->setEnabled(true);
    ui->searchButton->setEnabled(true);
    ui->filterButton->setEnabled(true);
    ui->statsButton->setEnabled(true);

    if (clickedButton) {
        clickedButton->setEnabled(false);
    }
}
void MainWindow::on_addButton_clicked() {
    ui->stackedWidget->setCurrentWidget(m_addScreen);
    updateButtons(ui->addButton);
}

void MainWindow::on_editButton_clicked() {
    ui->stackedWidget->setCurrentWidget(m_editScreen);
    updateButtons(ui->editButton);
}

void MainWindow::on_deleteButton_clicked() {
    ui->stackedWidget->setCurrentWidget(m_deleteScreen);
    updateButtons(ui->deleteButton);
}

void MainWindow::on_sortButton_clicked() {
    ui->stackedWidget->setCurrentWidget(m_sortScreen);
    updateButtons(ui->sortButton);
}

void MainWindow::on_searchButton_clicked() {
    ui->stackedWidget->setCurrentWidget(m_searchScreen);
    updateButtons(ui->searchButton);
}

void MainWindow::on_filterButton_clicked() {
    m_filterScreen->refreshComboBoxes();
    ui->stackedWidget->setCurrentWidget(m_filterScreen);
    updateButtons(ui->filterButton);
}

void MainWindow::on_statsButton_clicked()
{
    m_statScreen->refreshComboBoxes();
    ui->stackedWidget->setCurrentWidget(m_statScreen);
    updateButtons(ui->statsButton);
}
void MainWindow::applySearchFilter(const QString &title){
    if (title.isEmpty()) {
        model->setFilter("");
    } else {
        QString filter = QString("title ILIKE '%%1%'").arg(title);
        model->setFilter(filter);
    }

    model->select();

}
void MainWindow::applySort(const QString &column, Qt::SortOrder order){
    int columnIndex = -1;
    if (column == "id") columnIndex = 0;
    else if (column == "title") columnIndex = 1;
    else if (column == "score") columnIndex = 2;
    else if (column == "production_year") columnIndex = 3;
    else if (column == "duration") columnIndex = 4;
    else if (column == "director_id") columnIndex = 5;
    else if (column == "genre_id") columnIndex = 6;
    if (columnIndex != -1) {
        model->setSort(columnIndex, order);
        if (!model->select()) {
            qDebug() << "Blad sortowania:" << model->lastError().text();
        }
    }

}
void MainWindow::applyFilters(const QString &genre, const QString &director) {
    QStringList filters;

    if (genre != "Wszystkie gatunki" && !genre.isEmpty()) {
        filters << QString("relTblAl_6.name = '%1'").arg(genre);
    }
    if (director != "Wszyscy rezyserzy" && !director.isEmpty()) {
        filters << QString("relTblAl_5.name = '%1'").arg(director);
    }

    model->setFilter(filters.join(" AND "));
    model->select();
}

void MainWindow::on_resetAllButton_clicked()
{
    model->setFilter("");
    model->setSort(0, Qt::AscendingOrder);
    model->select();
    ui->stackedWidget->setCurrentIndex(0);
    updateButtons(nullptr);
}

