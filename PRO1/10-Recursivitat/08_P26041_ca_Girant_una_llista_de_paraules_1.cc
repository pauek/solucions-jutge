// Girant una llista de paraules (1)
// https://jutge.org/problems/P26041_ca
// P26041_ca:std:none:G++17
// Created on 04/11/2025, 18:03:46 by Pau Fernández

#include <iostream>
using namespace std;

void mostra_al_reves() {
    string paraula;
    if (cin >> paraula) {
        mostra_al_reves();
        cout << paraula << endl;
    }
}

int main() {
    mostra_al_reves();
}
