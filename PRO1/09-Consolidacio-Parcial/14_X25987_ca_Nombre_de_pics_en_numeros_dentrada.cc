// Nombre de pics en números d'entrada
// https://jutge.org/problems/X25987_ca
// X25987_ca:std:none:G++17
// Created on 03/11/2025, 17:18:32 by Pau Fernández

#include <iostream>
using namespace std;

int num_peaks(int N) {
    int peaks = 0;
    int d1 = N % 10, d2 = N / 10 % 10;
    for (int n = N / 100; n > 0; n /= 10) {
        int d3 = n % 10;
        if (d1 < d2 && d2 > d3) {
            peaks++;
        }   
        d1 = d2;
        d2 = d3;
    }
    return peaks;
}

int main() {
    int n;
    while (cin >> n) {
        cout << num_peaks(n) << endl;
    }
}
