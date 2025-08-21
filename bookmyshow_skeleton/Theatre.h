#pragma once
#include <string>
#include <vector>
#include "Screen.h"
#include "Show.h"
using namespace std;

class Theatre {
private:
    int id;
    string address;
    string city;
    vector<Screen> screens;
    vector<Show> shows;
public:
    Theatre(int id, string address, string city);
};
