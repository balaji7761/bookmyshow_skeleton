#include "Show.h"

Show::Show(int id, Movie* movie, Screen* screen, string start, string end)
    : id(id), movie(movie), screen(screen), startTime(start), endTime(end) {}
