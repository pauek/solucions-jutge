// Primalitat
// https://jutge.org/problems/P48713_ca
// P48713_ca:std:none:G++17
// Created on 27/10/2025, 18:51:55 by Pau Fernández

#include <iostream>
using namespace std;

bool es_primer(int n) {
	for (int d = 2; d * d <= n; d++) {
		if (n % d == 0) {
			return false;
		}
	}
	return n > 1;
}

int main() {
	int len, n;
	cin >> len;
	for (int i = 0; i < len; i++) {
		cin >> n;
		cout << n << (!es_primer(n) ? " no" : "") << " es primer" << endl;
	}
}
