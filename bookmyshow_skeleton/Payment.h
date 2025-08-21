#pragma once
#include <string>
using namespace std;

class Payment {
private:
    int id;
    string status; // success/failed/pending
public:
    Payment(int id, string status);
};
