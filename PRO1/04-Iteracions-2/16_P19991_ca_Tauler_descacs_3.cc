// Tauler d'escacs (3)
// https://jutge.org/problems/P19991_ca
// P19991_ca:std:none:G++17
// Created on 27/10/2025, 17:14:14 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int files;
	cin >> files;
	const int columnes = files;

	char c;
	int suma = 0;
	for (int i = 0; i < files; ++i) {
		for (int j = 0; j < columnes; ++j) {
			cin >> c;
			const bool diagonal = i == j || i + j == files - 1;
			suma += diagonal ? c - '0' : 0;
		}
	}
	cout << suma << endl;
}