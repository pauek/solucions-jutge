// Suma de dígits
// https://jutge.org/problems/P33839_ca
// P33839_ca:std:none:G++17
// Created on 21/10/2025, 19:55:11 by Pau Fernández

#include <iostream>
using namespace std;

int suma_digits(int n) {
	int suma = 0;
	while (n > 0) {
		suma += n % 10;
		n /= 10;
	}
	return suma;
}

int main() {
	int n;
	while (cin >> n) {
		cout << "La suma dels digits de " << n;
		cout << " es " << suma_digits(n) << "." << endl;
	}
}
