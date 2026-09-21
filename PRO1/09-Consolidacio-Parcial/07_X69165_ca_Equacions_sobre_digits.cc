// Equacions sobre dígits.
// https://jutge.org/problems/X69165_ca
// X69165_ca:std:none:G++17
// Created on 03/11/2025, 18:24:44 by Pau Fernández

#include <iostream>

using namespace std;

int main() {
	char c1, c2, c3, sum, eq;
	while (cin >> c1 >> sum >> c2 >> eq >> c3) {
		int sol;
		if (c1 == 'x') {
			sol = c3 - c2;
		} else if (c2 == 'x') {
			sol = c3 - c1;
		} else {
			sol = (c1 - '0') + (c2 - '0');
		}
		cout << sol << endl;
	}
}