#pragma once
#include <string>
using namespace std;

class Movie {
private:
    int id;
    string name;
    int duration; // in minutes
public:
    Movie(int id, string name, int duration);
};
