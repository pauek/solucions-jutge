// Quàntes xifres?
// https://jutge.org/problems/X08783_ca
// X08783_ca:std:none:G++17
// Created on 21/10/2025, 19:52:15 by Pau Fernández

#include <iostream>
using namespace std;

int num_xifres(int n, int base) {
	int xifres = 0;
	while (n > 0) {
		xifres++;
		n /= base;
	}
	return xifres;
}

int main() {
	int n, base;
	while (cin >> base >> n) {
		cout << num_xifres(n, base) << endl;
	}
}
