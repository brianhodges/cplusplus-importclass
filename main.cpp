#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>
#include "city.h"
#include "country.h"
using namespace std;

int main(int argc, const char * argv[]) {
    //Set Country Object (USA)
    static const string s1[] = { "New York", "Virginia", "California", "Florida", "Hawaii" };
    vector<string> states1 (s1, s1 + sizeof(s1) / sizeof(s1[0]) );
    City city1;
    city1.set_values("Los Angeles", "4 million");
    Country c1;
    c1.set_values("USA", "350 million", city1, states1);
    
    //Set Country Object (MEXICO)
    static const string s2[] = { "Durango", "Puebla", "Guerrero", "Quintana Roo" };
    vector<string> states2 (s2, s2 + sizeof(s2) / sizeof(s2[0]) );
    City city2;
    city2.set_values("Cancun", "700,000");
    Country c2;
    c2.set_values("Mexico", "127 million", city2, states2);
    
    //add countries to an array
    Country countries[2] = {c1, c2};

    ofstream out_data("log.txt");
    out_data << endl;
    for (int i = 0; i < sizeof(countries)/sizeof(countries[0]); i++) {
        out_data << "Name: " << countries[i].name << endl;
        out_data << "Population: " << countries[i].population << endl;
        out_data << "Best States: " << countries[i].pretty_states() << endl;
        out_data << "Top State Count: " << countries[i].states.size() << endl;
        out_data << "Best City: " << countries[i].best_city.name << endl;
        out_data << countries[i].best_city.name << " Population: " << countries[i].best_city.population << endl;
        out_data << endl;
    }
    return 0;
}