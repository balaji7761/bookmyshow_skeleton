#pragma once
#include <vector>
#include <string>
#include "Theatre.h"
using namespace std;

class TheatreController {
private:
    vector<Theatre> theatres;
public:
    void addTheatre(Theatre theatre);
    vector<Theatre> getTheatres(string city);
};
