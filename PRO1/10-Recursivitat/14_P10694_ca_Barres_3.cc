// Barres (3)
// https://jutge.org/problems/P10694_ca
// P10694_ca:std:none:G++17
// Created on 07/11/2025, 17:56:39 by Pau Fernández

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
    barres(n-1);
    barra(n);
}

int main() {
    int n;
    cin >> n;
    barres(n);
}
