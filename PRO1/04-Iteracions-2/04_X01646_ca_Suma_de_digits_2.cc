// Suma de dígits (2)
// https://jutge.org/problems/X01646_ca
// X01646_ca:std:none:G++17
// Created on 21/10/2025, 19:57:02 by Pau Fernández

#include <iostream>
using namespace std;

int suma_digits_base(int n, int base) {
	int suma = 0;
	while (n > 0) {
		suma += n % base;
		n /= base;
	}
	return suma;
}

int main() {
	int base;
	cin >> base;

	int n;
	while (cin >> n) {
		cout << n << ": " << suma_digits_base(n, base) << endl;
	}
}
