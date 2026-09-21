// Control C202B
// https://jutge.org/problems/P65171_ca
// P65171_ca:std:none:
// Created on 20/10/2025, 07:53:42 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);

	int n;
	cin >> n;

	double suma = 0, quadrats = 0;
	for (int i = 0; i < n; i++) {
		double x;
		cin >> x;
		suma += x;
		quadrats += x * x;
	}

	const double variansa =
		1.0 / double(n - 1) * quadrats - 1.0 / (double(n) * double(n - 1)) * suma * suma;

	cout << variansa << endl;
}
