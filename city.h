#ifndef CITY_H
#define CITY_H

#include <iostream>
#include <string>

class City {
    public:
        std::string name, population;
        void set_values(std::string, std::string);
};

void City::set_values(std::string n, std::string p) {
    name = n;
    population = p;
}

#endif