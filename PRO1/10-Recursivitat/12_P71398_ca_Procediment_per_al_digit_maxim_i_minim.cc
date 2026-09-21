// Procediment per al dígit màxim i mínim
// https://jutge.org/problems/P71398_ca
// P71398_ca:std:no_main:G++17
// Created on 04/11/2025, 18:44:23 by Pau Fernández

#include <iostream>
using namespace std;


void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    if (n < 10) {
        maxim = n % 10;
        minim = n % 10;
        return;
    }
    digit_maxim_i_minim(n / 10, maxim, minim);
    maxim = max(maxim, n % 10);
    minim = min(minim, n % 10);
}


int main() {
    int x;
    while (cin >> x) {
      int a = -1, b = -1;
      digit_maxim_i_minim(x, a, b);
      cout << x << ' ' << a << ' ' << b << endl;
    }
}

