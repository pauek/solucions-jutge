// Girant una llista de paraules (4)
// https://jutge.org/problems/P38877_ca
// P38877_ca:std:none:G++17
// Created on 04/11/2025, 18:42:09 by Pau Fernández

#include <iostream>
using namespace std;

// Retorna la distància al final de la seqüència
int gira_paraules(int n) {
    string p;
    if (cin >> p) {
        int dist = gira_paraules(n);
        if (dist < n) {
            cout << p << endl;
        }
        return dist + 1;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;

    gira_paraules(n);
}
