// Longitud mitjana i lletra mes frequent
// https://jutge.org/problems/X20419_ca
// X20419_ca:std:none:G++17
// Created on 22/11/2025, 16:41:23 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

const int LONG_ALFABET = 'z' - 'a' + 1;

char lletra_mes_frequent(const string& s) {
    vector<int> compt(LONG_ALFABET, 0);
    char cmax = s[0];
    int max = 1;
    for (int i = 0; i < int(s.size()); i++) {
        const char c = s[i];
        int& compti = compt[c - 'a'];
        compti++;
        if (compti > max || (compti == max && c < cmax)) {
            cmax = c;
            max = compti;
        }
    }
    return cmax;
}

int main() {
    int num_paraules;
    cin >> num_paraules;
    double long_total = 0.0;
    vector<string> paraules(num_paraules);
    for (int i = 0; i < num_paraules; i++) {
        cin >> paraules[i];
        long_total += paraules[i].size();
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    const double mitjana = long_total / double(num_paraules);
    cout << mitjana << endl;

    for (int i = 0; i < num_paraules; i++) {
        const string& paraula = paraules[i];
        if (double(paraula.size()) >= mitjana) {
            cout << paraula << ": " << lletra_mes_frequent(paraula) << endl;
        }
    }
}
