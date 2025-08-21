#pragma once
#include <vector>
#include "Seat.h"
using namespace std;

class Screen {
private:
    int id;
    vector<Seat> seats;
public:
    Screen(int id);
};
