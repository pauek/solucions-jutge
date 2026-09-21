// Octàgons facilets
// https://jutge.org/problems/P87198_ca
// P87198_ca:std:none:G++17
// Created on 21/10/2025, 20:42:07 by Pau Fernández

#include <iostream>
using namespace std;

void linia(int espais, int num_xs) {
	cout << string(espais, ' ') << string(num_xs, 'X') << endl;
}

int main() {
	int n;
	while (cin >> n) {
		for (int i = 0; i < n - 1; ++i) {
			linia(n - i - 1, n + 2 * i);
		}
		for (int i = 0; i < n - 1; ++i) {
			linia(0, 3 * n - 2);
		}
		for (int i = n - 1; i >= 0; --i) {
			linia(n - i - 1, n + 2 * i);
		}
		cout << endl;
	}
}
