#pragma once
#include <map>
#include <string>
#include <vector>
#include "Movie.h"
using namespace std;

class MovieController {
private:
    map<string, vector<Movie>> cityMovies;
public:
    void addMovie(string city, Movie movie);
    vector<Movie> getMoviesByCity(string city);
};
