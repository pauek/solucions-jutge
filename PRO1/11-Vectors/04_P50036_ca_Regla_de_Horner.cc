// Regla de Horner
// https://jutge.org/problems/P50036_ca
// P50036_ca:std:no_main:G++17
// Created on 22/11/2025, 16:16:58 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

int avalua(const vector<int>& P, int x) {
    int suma = 0;
    for (int i = P.size()-1; i >= 0; i--) {
        suma = suma*x + P[i];
    }
    return suma;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> P(n);
		for (int i = 0; i < n; ++i) {
			cin >> P[i];
		}
		int x;
		cin >> x;
		cout << avalua(P, x) << endl;
	}
	return 0;
}
