// Número de cifras
// https://jutge.org/problems/P74398_es
// P74398_es:std:none:
// Created on 14/10/2025, 19:49:40 by Pau Fernández

#include <iostream>
using namespace std;

int num_xifres(int n, int base) {
	if (n == 0) {
		return 1;
	}
	int xifres = 0;
	while (n > 0) {
		xifres++;
		n /= base;
	}
	return xifres;
}

int main() {
	int n;
	cin >> n;

	for (int base = 2; base <= 16; base++) {
		cout << "Base " << base << ": " << num_xifres(n, base) << " cifras." << endl;
	}
}
