CREATE TABLE IF NOT EXISTS genres (
    id SERIAL PRIMARY KEY,
    name VARCHAR(100) NOT NULL UNIQUE
);

CREATE TABLE IF NOT EXISTS directors (
    id SERIAL PRIMARY KEY,
    name VARCHAR(255) NOT NULL UNIQUE
);

CREATE TABLE IF NOT EXISTS movies (
    id SERIAL PRIMARY KEY,
    title VARCHAR(255) NOT NULL,
    score FLOAT CHECK (score >= 0 AND score <= 10),
    production_year INTEGER NOT NULL,
    duration INTEGER NOT NULL,
    director_id INTEGER REFERENCES directors(id) ON DELETE SET NULL,
    genre_id INTEGER REFERENCES genres(id) ON DELETE SET NULL,
    CONSTRAINT unique_movie_title_year UNIQUE (title, production_year)
);

INSERT INTO genres (name) VALUES
('Action'), ('Comedy'), ('Drama'), ('Sci-Fi'), ('Horror'),
('Thriller'), ('Fantasy'), ('Documentary'), ('Animation'),
('Crime'), ('Romance'), ('Mystery')
ON CONFLICT (name) DO NOTHING;

INSERT INTO directors (name) VALUES
('Christopher Nolan'), ('Quentin Tarantino'), ('Greta Gerwig'),
('Steven Spielberg'), ('Martin Scorsese'), ('James Cameron'),
('David Fincher'), ('Ridley Scott'), ('Lana Wachowski'),
('Francis Ford Coppola'), ('Peter Jackson'), ('Frank Darabont'),
('Sidney Lumet'), ('Tobe Hooper'), ('Stanley Kubrick'),
('Alfred Hitchcock'), ('Bong Joon-ho'), ('Wes Anderson'),
('Denis Villeneuve'), ('George Miller'), ('Damien Chazelle'),
('Todd Phillips'), ('Danny Boyle')
ON CONFLICT (name) DO NOTHING;

INSERT INTO movies (title, score, production_year, duration, director_id, genre_id) VALUES
('Inception', 8.8, 2010, 148, (SELECT id FROM directors WHERE name = 'Christopher Nolan'), (SELECT id FROM genres WHERE name = 'Action')),
('Pulp Fiction', 8.9, 1994, 154, (SELECT id FROM directors WHERE name = 'Quentin Tarantino'), (SELECT id FROM genres WHERE name = 'Crime')),
('Lady Bird', 7.4, 2017, 94, (SELECT id FROM directors WHERE name = 'Greta Gerwig'), (SELECT id FROM genres WHERE name = 'Drama')),
('Interstellar', 8.7, 2014, 169, (SELECT id FROM directors WHERE name = 'Christopher Nolan'), (SELECT id FROM genres WHERE name = 'Sci-Fi')),
('The Dark Knight', 9.0, 2008, 152, (SELECT id FROM directors WHERE name = 'Christopher Nolan'), (SELECT id FROM genres WHERE name = 'Action')),
('Django Unchained', 8.5, 2012, 165, (SELECT id FROM directors WHERE name = 'Quentin Tarantino'), (SELECT id FROM genres WHERE name = 'Drama')),
('Inglourious Basterds', 8.4, 2009, 153, (SELECT id FROM directors WHERE name = 'Quentin Tarantino'), (SELECT id FROM genres WHERE name = 'Action')),
('Shutter Island', 8.2, 2010, 138, (SELECT id FROM directors WHERE name = 'Martin Scorsese'), (SELECT id FROM genres WHERE name = 'Mystery')),
('The Wolf of Wall Street', 8.2, 2013, 180, (SELECT id FROM directors WHERE name = 'Martin Scorsese'), (SELECT id FROM genres WHERE name = 'Crime')),
('Jurassic Park', 8.2, 1993, 127, (SELECT id FROM directors WHERE name = 'Steven Spielberg'), (SELECT id FROM genres WHERE name = 'Sci-Fi')),
('Fight Club', 8.8, 1999, 139, (SELECT id FROM directors WHERE name = 'David Fincher'), (SELECT id FROM genres WHERE name = 'Drama')),
('The Matrix', 8.7, 1999, 136, (SELECT id FROM directors WHERE name = 'Lana Wachowski'), (SELECT id FROM genres WHERE name = 'Sci-Fi')),
('Gladiator', 8.5, 2000, 155, (SELECT id FROM directors WHERE name = 'Ridley Scott'), (SELECT id FROM genres WHERE name = 'Action')),
('The Godfather', 9.2, 1972, 175, (SELECT id FROM directors WHERE name = 'Francis Ford Coppola'), (SELECT id FROM genres WHERE name = 'Crime')),
('The Godfather Part II', 9.0, 1974, 202, (SELECT id FROM directors WHERE name = 'Francis Ford Coppola'), (SELECT id FROM genres WHERE name = 'Crime')),
('Apocalypse Now', 8.4, 1979, 147, (SELECT id FROM directors WHERE name = 'Francis Ford Coppola'), (SELECT id FROM genres WHERE name = 'Drama')),
('The Lord of the Rings: The Return of the King', 9.0, 2003, 201, (SELECT id FROM directors WHERE name = 'Peter Jackson'), (SELECT id FROM genres WHERE name = 'Fantasy')),
('The Lord of the Rings: The Fellowship of the Ring', 8.8, 2001, 178, (SELECT id FROM directors WHERE name = 'Peter Jackson'), (SELECT id FROM genres WHERE name = 'Fantasy')),
('The Hobbit: An Unexpected Journey', 7.8, 2012, 169, (SELECT id FROM directors WHERE name = 'Peter Jackson'), (SELECT id FROM genres WHERE name = 'Fantasy')),
('The Prestige', 8.5, 2006, 130, (SELECT id FROM directors WHERE name = 'Christopher Nolan'), (SELECT id FROM genres WHERE name = 'Mystery')),
('Memento', 8.4, 2000, 113, (SELECT id FROM directors WHERE name = 'Christopher Nolan'), (SELECT id FROM genres WHERE name = 'Thriller')),
('Oppenheimer', 8.4, 2023, 180, (SELECT id FROM directors WHERE name = 'Christopher Nolan'), (SELECT id FROM genres WHERE name = 'Drama')),
('Schindlers List', 9.0, 1993, 195, (SELECT id FROM directors WHERE name = 'Steven Spielberg'), (SELECT id FROM genres WHERE name = 'Drama')),
('Saving Private Ryan', 8.6, 1998, 169, (SELECT id FROM directors WHERE name = 'Steven Spielberg'), (SELECT id FROM genres WHERE name = 'Action')),
('Catch Me If You Can', 8.1, 2002, 141, (SELECT id FROM directors WHERE name = 'Steven Spielberg'), (SELECT id FROM genres WHERE name = 'Crime')),
('Goodfellas', 8.7, 1990, 145, (SELECT id FROM directors WHERE name = 'Martin Scorsese'), (SELECT id FROM genres WHERE name = 'Crime')),
('The Departed', 8.5, 2006, 151, (SELECT id FROM directors WHERE name = 'Martin Scorsese'), (SELECT id FROM genres WHERE name = 'Thriller')),
('Taxi Driver', 8.2, 1976, 114, (SELECT id FROM directors WHERE name = 'Martin Scorsese'), (SELECT id FROM genres WHERE name = 'Drama')),
('Reservoir Dogs', 8.3, 1992, 99, (SELECT id FROM directors WHERE name = 'Quentin Tarantino'), (SELECT id FROM genres WHERE name = 'Crime')),
('Kill Bill: Vol. 1', 8.2, 2003, 111, (SELECT id FROM directors WHERE name = 'Quentin Tarantino'), (SELECT id FROM genres WHERE name = 'Action')),
('Once Upon a Time in Hollywood', 7.6, 2019, 161, (SELECT id FROM directors WHERE name = 'Quentin Tarantino'), (SELECT id FROM genres WHERE name = 'Comedy')),
('Dune', 8.0, 2021, 155, (SELECT id FROM directors WHERE name = 'Denis Villeneuve'), (SELECT id FROM genres WHERE name = 'Sci-Fi')),
('Blade Runner 2049', 8.0, 2017, 164, (SELECT id FROM directors WHERE name = 'Denis Villeneuve'), (SELECT id FROM genres WHERE name = 'Sci-Fi')),
('Arrival', 7.9, 2016, 116, (SELECT id FROM directors WHERE name = 'Denis Villeneuve'), (SELECT id FROM genres WHERE name = 'Sci-Fi')),
('Se7en', 8.6, 1995, 127, (SELECT id FROM directors WHERE name = 'David Fincher'), (SELECT id FROM genres WHERE name = 'Crime')),
('The Social Network', 7.8, 2010, 120, (SELECT id FROM directors WHERE name = 'David Fincher'), (SELECT id FROM genres WHERE name = 'Drama')),
('Zodiac', 7.7, 2007, 157, (SELECT id FROM directors WHERE name = 'David Fincher'), (SELECT id FROM genres WHERE name = 'Crime')),
('The Shawshank Redemption', 9.3, 1994, 142, (SELECT id FROM directors WHERE name = 'Frank Darabont'), (SELECT id FROM genres WHERE name = 'Drama')),
('12 Angry Men', 9.0, 1957, 96, (SELECT id FROM directors WHERE name = 'Sidney Lumet'), (SELECT id FROM genres WHERE name = 'Drama')),
('Parasite', 8.5, 2019, 132, (SELECT id FROM directors WHERE name = 'Bong Joon-ho'), (SELECT id FROM genres WHERE name = 'Thriller')),
('The Grand Budapest Hotel', 8.1, 2014, 99, (SELECT id FROM directors WHERE name = 'Wes Anderson'), (SELECT id FROM genres WHERE name = 'Comedy')),
('Mad Max: Fury Road', 8.1, 2015, 120, (SELECT id FROM directors WHERE name = 'George Miller'), (SELECT id FROM genres WHERE name = 'Action')),
('Whiplash', 8.5, 2014, 106, (SELECT id FROM directors WHERE name = 'Damien Chazelle'), (SELECT id FROM genres WHERE name = 'Drama')),
('The Shining', 8.4, 1980, 146, (SELECT id FROM directors WHERE name = 'Stanley Kubrick'), (SELECT id FROM genres WHERE name = 'Horror')),
('Psycho', 8.5, 1960, 109, (SELECT id FROM directors WHERE name = 'Alfred Hitchcock'), (SELECT id FROM genres WHERE name = 'Horror')),
('Joker', 8.4, 2019, 122, (SELECT id FROM directors WHERE name = 'Todd Phillips'), (SELECT id FROM genres WHERE name = 'Crime')),
('Trainspotting', 8.1, 1996, 94, (SELECT id FROM directors WHERE name = 'Danny Boyle'), (SELECT id FROM genres WHERE name = 'Drama')),
('La La Land', 8.0, 2016, 128, (SELECT id FROM directors WHERE name = 'Damien Chazelle'), (SELECT id FROM genres WHERE name = 'Romance')),
('Moonrise Kingdom', 7.8, 2012, 94, (SELECT id FROM directors WHERE name = 'Wes Anderson'), (SELECT id FROM genres WHERE name = 'Comedy')),
('A Clockwork Orange', 8.3, 1971, 136, (SELECT id FROM directors WHERE name = 'Stanley Kubrick'), (SELECT id FROM genres WHERE name = 'Sci-Fi')),
('Rear Window', 8.5, 1954, 112, (SELECT id FROM directors WHERE name = 'Alfred Hitchcock'), (SELECT id FROM genres WHERE name = 'Mystery')),
('Aliens', 8.4, 1986, 137, (SELECT id FROM directors WHERE name = 'James Cameron'), (SELECT id FROM genres WHERE name = 'Sci-Fi')),
('Avatar', 7.9, 2009, 162, (SELECT id FROM directors WHERE name = 'James Cameron'), (SELECT id FROM genres WHERE name = 'Sci-Fi'))
ON CONFLICT (title, production_year) DO NOTHING;