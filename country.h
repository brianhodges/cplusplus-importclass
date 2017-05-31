#ifndef COUNTRY_H
#define COUNTRY_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Country {
    public:
        string name, population;
        City best_city;
        vector<string> states;
        void set_values(string, string, City, vector<string>);
        string pretty_states(void){
            string result;
            for(vector<string>::iterator it = states.begin(); it != states.end(); ++it) {
                if(it != states.begin()) {
                    result += ", ";
                }
                result += *it;
            }
            return result;
        }
};

void Country::set_values(string n, string p, City c, vector<string> s) {
    name = n;
    population = p;
    best_city = c;
    states = s;
}

#endif