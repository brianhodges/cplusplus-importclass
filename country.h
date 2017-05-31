#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
#include <string>
#include <vector>

class Country {
    public:
        std::string name, population;
        City best_city;
        std::vector<std::string> states;
        void set_values(std::string, std::string, City, std::vector<std::string>);
        std::string pretty_states(void){
            std::string result;
            for(std::vector<std::string>::iterator it = states.begin();
                it != states.end();
                ++it) {
                if(it != states.begin()) {
                    result += ", ";
                }
                result += *it;
            }
            return result;
        }
};

void Country::set_values(std::string n, std::string p, City c, std::vector<std::string> s) {
    name = n;
    population = p;
    best_city = c;
    states = s;
}

#endif