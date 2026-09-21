// Trigonometria
// https://jutge.org/problems/P37760_ca
// P37760_ca:std:none:G++17
// Created on 27/10/2025, 17:55:21 by Pau Fernández

#include <cmath>
#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);

	double a;
	while (cin >> a) {
		double r = a * M_PI / 180.0;
		cout << sin(r) << " " << cos(r) << endl;
	}
}
