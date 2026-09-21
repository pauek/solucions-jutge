// Reducció de dígits
// https://jutge.org/problems/P96965_ca
// P96965_ca:std:no_main:G++17
// Created on 04/11/2025, 18:00:11 by Pau Fernández

#include <iostream>
using namespace std;

int suma_digits(int x) {
    if (x == 0) {
        return 0;
    }
    return x % 10 + suma_digits(x / 10);
}

int reduccio_digits(int n) {
    if (n < 10) {
        return n;
    }
    return reduccio_digits(suma_digits(n));
}

int main()
{
    int n;
    while (cin >> n) {
        cout << reduccio_digits(n) << endl;
    }
    return 0;
}
