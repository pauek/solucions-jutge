// Igual a l'últim
// https://jutge.org/problems/P14130_ca
// P14130_ca:std:none:G++17
// Created on 22/11/2025, 16:07:34 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> seq(n); // reservem espai d'entrada
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }
    const int ultim = seq.back();
    int iguals_a_lultim = 0;
    for (int i = 0; i < int(seq.size()-1); i++) {
        if (seq[i] == ultim) {
            iguals_a_lultim++;
        }
    }

    cout << iguals_a_lultim << endl;
}
