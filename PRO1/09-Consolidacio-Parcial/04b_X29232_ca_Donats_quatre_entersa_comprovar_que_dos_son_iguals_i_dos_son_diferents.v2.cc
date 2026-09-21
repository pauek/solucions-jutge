// Donats quatre enters, comprovar que dos son iguals i dos son diferents
// https://jutge.org/problems/X29232_ca
// X29232_ca:std:none:G++17
// Created on 03/11/2025, 18:13:22 by Pau Fernández

#include <iostream>
using namespace std;

bool iguals_diferents(int a, int b, int c, int d) {
	return a == b && a != c && a != d && b != c && b != d && c != d;
}

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	bool condition = iguals_diferents(a, b, c, d) || iguals_diferents(a, c, b, d) ||
					 iguals_diferents(a, d, b, c) || iguals_diferents(b, c, a, d) ||
					 iguals_diferents(b, d, a, c) || iguals_diferents(c, d, a, b);

	cout << (condition ? "YES" : "NO") << endl;
}
