// Tauler d'escacs (4)
// https://jutge.org/problems/X29759_ca
// X29759_ca:std:none:G++17
// Created on 27/10/2025, 17:16:49 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int files;
	cin >> files;
	const int columnes = files;

	char c;
	int suma_blanques = 0, suma_negres = 0;
	for (int i = 0; i < files; ++i) {
		for (int j = 0; j < columnes; ++j) {
			cin >> c;
			if ((i + j) % 2 == 0) {
				suma_blanques += c - '0';
			} else {
				suma_negres += c - '0';
			}
		}
	}
	cout << suma_blanques << '-' << suma_negres << " = ";
	cout << (suma_blanques - suma_negres) << endl;
}