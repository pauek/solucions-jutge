// Posició del màxim
// https://jutge.org/problems/P29094_ca
// P29094_ca:std:no_main:G++17
// Created on 05/12/2025, 10:00:11 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

int posicio_maxim(const vector<double>& v, int m) {
    if (v.empty()) {
        return -1;
    }
    int imax = 0;
    for (int i = 0; i <= m; i++) {
        if (v[i] > v[imax]) {
            imax = i;
        }
    }
    return imax;
}

int main()
{
    int m, n;
    while (cin >> m >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i)
            cin >> V[i];
        cout << posicio_maxim(V, m) << endl;
    }
    return 0;
}
