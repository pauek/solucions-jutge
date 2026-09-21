// Parells d'una seqüència (1)
// https://jutge.org/problems/P85480_ca
// P85480_ca:std:none:G++17
// Created on 22/11/2025, 16:35:25 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

vector<int> llegeix_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < int(v.size()); i++) {
        cin >> v[i];
    }
    return v;
}

bool es_primer(int n) {
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            return false;
        }
    }
    return n > 1;
}

bool suma_parell_primer(const vector<int>& v) {
    for (int i = 0; i < int(v.size()); i++) {
        for (int j = i+1; j < int(v.size()); j++) {
            if (es_primer(v[i] + v[j])) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v = llegeix_vector(n);
        cout << (suma_parell_primer(v) ? "si" : "no") << endl;
    }
}
