// Nombre de dígits (1)
// https://jutge.org/problems/P55622_ca
// P55622_ca:std:none:
// Created on 14/10/2025, 19:47:05 by Pau Fernández

#include <iostream>
using namespace std;

int num_digits(int n) {
	if (n == 0) {
		return 1;
	}
	int ndigits = 0;
	while (n > 0) {
		ndigits++;
		n /= 10;
	}
	return ndigits;
}

int main() {
	int n;
	cin >> n;
	cout << "El nombre de digits de " << n << " es " << num_digits(n) << "." << endl;
}
