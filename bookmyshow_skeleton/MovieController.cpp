#include "MovieController.h"

void MovieController::addMovie(string city, Movie movie) {
    cityMovies[city].push_back(movie);
}

vector<Movie> MovieController::getMoviesByCity(string city) {
    return cityMovies[city];
}
