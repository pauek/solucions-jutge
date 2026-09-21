// Donats quatre enters, comprovar que dos son iguals i dos son diferents
// https://jutge.org/problems/X29232_ca
// X29232_ca:std:none:G++17
// Created on 03/11/2025, 18:08:05 by Pau Fernández

#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int numdif = 1;
	if (b != a) {
		numdif++;
	}
	if (c != a && c != b) {
		numdif++;
	}
	if (d != a && d != b && d != c) {
		numdif++;
	}

	cout << (numdif == 3 ? "YES" : "NO") << endl;
}
