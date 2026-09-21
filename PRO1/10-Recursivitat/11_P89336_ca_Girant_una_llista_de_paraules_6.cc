// Girant una llista de paraules (6)
// https://jutge.org/problems/P89336_ca
// P89336_ca:std:none:G++17
// Created on 04/11/2025, 18:43:54 by Pau Fernández

#include <iostream>
using namespace std;

// Retorna la distància al final de la seqüència
int mostra_paraules(int index) {
    string p;
    if (cin >> p) {
        int dist = mostra_paraules(index + 1);
        if (dist >= index) {
            cout << p << endl;
        }
        return dist + 1;
    }
    return 0;
}

int main() {
    mostra_paraules(1);
}
