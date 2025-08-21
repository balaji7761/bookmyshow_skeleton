#pragma once
#include <string>
using namespace std;

enum class SeatCategory {
    SILVER,
    GOLD,
    PLATINUM
};

class Seat {
private:
    int id;
    int row;
    SeatCategory category;
public:
    Seat(int id, int row, SeatCategory category);
};
