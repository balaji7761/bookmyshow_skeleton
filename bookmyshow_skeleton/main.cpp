#include <iostream>
#include "MovieController.h"
#include "TheatreController.h"
using namespace std;

int main() {
    MovieController movieController;
    TheatreController theatreController;

    Movie m1(1, "Inception", 120);
    movieController.addMovie("Bangalore", m1);

    Theatre t1(1, "MG Road", "Bangalore");
    theatreController.addTheatre(t1);

    cout << "BookMyShow skeleton ready!" << endl;
    return 0;
}
