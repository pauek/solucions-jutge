// Vector muntanyos
// https://jutge.org/problems/X41120_ca
// X41120_ca:std:none:G++17
// Created on 22/11/2025, 17:21:31 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

vector<int> calcula_cims(const vector<int>& v) {
    vector<int> cims;
    for (int i = 1; i < int(v.size()-1); i++) {
        if (v[i-1] < v[i] && v[i] > v[i+1]) {
            cims.push_back(v[i]);
        }
    }
    return cims;
}

int main() {
    int n;
    cin >> n;

    vector<int> perfil(n);
    for (int i = 0; i < n; i++) {
        cin >> perfil[i];
    }

    const vector<int> cims = calcula_cims(perfil);
    cout << cims.size() << ":";
    for (int i = 0; i < int(cims.size()); i++) {
        cout << ' ' << cims[i];
    }
    cout << endl;

    int quants = 0;
    for (int i = 0; i < int(cims.size()-1); i++) {
        if (cims[i] > cims.back()) {
            if (quants > 0) {
                cout << ' ';
            }
            cout << cims[i];
            quants++;
        }
    }
    cout << (quants == 0 ? "-" : "") << endl;
}
