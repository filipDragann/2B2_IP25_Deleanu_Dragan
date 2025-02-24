#pragma once
#include <iostream>
#include <string>
using namespace std;

class Spital {
private:
    string type;

public:
    // constructor to initialize type
    Spital() : type("Spital") {}

    // declare virtual function
    virtual string getType() {
        return type;
    }

};