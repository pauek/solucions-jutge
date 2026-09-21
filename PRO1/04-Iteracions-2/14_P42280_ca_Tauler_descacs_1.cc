// Tauler d'escacs (1)
// https://jutge.org/problems/P42280_ca
// P42280_ca:std:none:G++17
// Created on 27/10/2025, 17:10:04 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int files, columnes;
	cin >> files >> columnes;

	int suma = 0;
	for (int i = 0; i < files; ++i) {
		for (int j = 0; j < columnes; ++j) {
			char c;
			cin >> c;
			suma += c - '0';
		}
	}

	cout << suma << endl;
}