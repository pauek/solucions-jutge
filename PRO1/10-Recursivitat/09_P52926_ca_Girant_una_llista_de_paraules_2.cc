// Girant una llista de paraules (2)
// https://jutge.org/problems/P52926_ca
// P52926_ca:std:none:G++17
// Created on 07/11/2025, 17:34:26 by Pau Fernández

#include <iostream>
using namespace std;

void mostra_paraules() {
    string paraula;
    if (cin >> paraula) {
        if (paraula != "fi") {
            mostra_paraules();
            cout << paraula << endl;
        }
    }
}

int main() {
    mostra_paraules();
}
