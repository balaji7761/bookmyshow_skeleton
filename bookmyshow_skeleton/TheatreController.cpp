#include "TheatreController.h"

void TheatreController::addTheatre(Theatre theatre) {
    theatres.push_back(theatre);
}

vector<Theatre> TheatreController::getTheatres(string city) {
    vector<Theatre> result;
    for (auto& t : theatres) {
        // TODO: filter by city
    }
    return result;
}
