#pragma once
#include <string>
#include <vector>
#include "Movie.h"
#include "Screen.h"
using namespace std;

class Show {
private:
    int id;
    Movie* movie;
    Screen* screen;
    string startTime;
    string endTime;
    vector<Seat> bookedSeats;
public:
    Show(int id, Movie* movie, Screen* screen, string start, string end);
};
