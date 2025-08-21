#include "Booking.h"

Booking::Booking(Show* show, vector<Seat> seats, Payment* payment)
    : show(show), seats(seats), payment(payment) {}
