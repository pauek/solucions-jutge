// Algun nombre capicua
// https://jutge.org/problems/X65175_ca
// X65175_ca:std:none:P1++
// Created on 03/11/2025, 17:22:26 by Pau Fernández

#include <iostream>
using namespace std;

int revessar(int n) {
    int r = 0;
    for (int i = n; i > 0; i /= 10) {
        r = 10*r + i % 10;
    }
    return r;
}

bool es_capicua(int n) {
    return n > 99 && n == revessar(n);
}

int main() {
    int n;
    bool algun_capicua = false;
    while (!algun_capicua && cin >> n) {
        if (es_capicua(n)) {
            algun_capicua = true;
        }
    }
    if (algun_capicua) {
        cout << n << '!' << endl;
    } else {
        cout << "Res." << endl;
    }
}

