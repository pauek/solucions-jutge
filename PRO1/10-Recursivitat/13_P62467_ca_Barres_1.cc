// Barres (1)
// https://jutge.org/problems/P62467_ca
// P62467_ca:std:none:G++17
// Created on 04/11/2025, 18:47:08 by Pau Fernández

#include <iostream>
using namespace std;

void barra(int n) {
    if (n == 0) {
        cout << endl;
        return;
    }
    cout << '*';
    barra(n-1);
}

void barres(int n) {
    if (n == 0) {
        return;
    }
    barres(n-1);
    barra(n);
    barres(n-1);
}

int main() {
    int n;
    cin >> n;
    barres(n);
}
