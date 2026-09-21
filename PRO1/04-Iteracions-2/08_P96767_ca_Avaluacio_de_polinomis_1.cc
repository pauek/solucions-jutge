// Avaluació de polinomis (1)
// https://jutge.org/problems/P96767_ca
// P96767_ca:std:none:G++17
// Created on 21/10/2025, 20:09:46 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);

	double x;
	cin >> x;

	double c, x_n = 1.0, resultat = 0.0;
	while (cin >> c) {
		resultat += c * x_n;
		x_n *= x;
	}
	cout << resultat << endl;
}
