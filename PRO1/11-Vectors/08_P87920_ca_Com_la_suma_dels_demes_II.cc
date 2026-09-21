// Com la suma dels demés (II)
// https://jutge.org/problems/P87920_ca
// P87920_ca:std:none:G++17
// Created on 22/11/2025, 16:24:13 by Pau Fernández

#include <vector>
#include <iostream>
using namespace std;

bool find_elem(const vector<int>& v, int elem) {
    for (int i = 0; i < int(v.size()); i++) {
        if (v[i] == elem) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> seq(n);
        int total = 0;
        for (int i = 0; i < n; i++) {
            cin >> seq[i];
            total += seq[i];
        }
        // Si un element és igual que tots els altres, llavors
        // té com a valor la meitat de la suma total (total/2).
        // Així doncs, primer mirem si la suma és parell, i després
        // busquem l'element.
        cout << (total % 2 == 0 && find_elem(seq, total/2) ? "YES" : "NO") << endl;
    }
}
