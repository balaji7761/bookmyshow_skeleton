#pragma once
#include <vector>
#include "Show.h"
#include "Seat.h"
#include "Payment.h"
using namespace std;

class Booking {
private:
    Show* show;
    vector<Seat> seats;
    Payment* payment;
public:
    Booking(Show* show, vector<Seat> seats, Payment* payment);
};
