// Màxim de cada seqüència
// https://jutge.org/problems/P71753_ca
// P71753_ca:std:none:G++17
// Created on 27/10/2025, 19:45:17 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n;

	while (cin >> n) {
		int M, k;
		cin >> M;

		for (int i = 1; i < n; ++i) {
			cin >> k;
			M = max(M, k);
		}

		cout << M << endl;
	}
}
