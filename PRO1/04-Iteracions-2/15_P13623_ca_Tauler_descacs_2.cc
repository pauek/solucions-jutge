// Tauler d'escacs (2)
// https://jutge.org/problems/P13623_ca
// P13623_ca:std:none:G++17
// Created on 27/10/2025, 17:12:18 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int files, columnes;
	cin >> files >> columnes;

	int suma = 0;

	for (int i = 1; i <= files; ++i) {
		for (int j = 1; j <= columnes; ++j) {
			char k;
			cin >> k;
			suma += ((i + j) % 2 == 0 ? k - '0' : 0);
		}
	}
	cout << suma << endl;
}
