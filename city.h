#ifndef CITY_H
#define CITY_H

#include <iostream>
#include <string>
using namespace std;

class City {
    public:
        string name, population;
        void set_values(string, string);
};

void City::set_values(string n, string p) {
    name = n;
    population = p;
}

#endif