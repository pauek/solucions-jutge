// Producte de dígits
// https://jutge.org/problems/P61061_ca
// P61061_ca:std:none:G++17
// Created on 21/10/2025, 19:58:30 by Pau Fernández

#include <iostream>
using namespace std;

int producte_digits(int n) {
	int prod = 1;
	while (n > 0) {
		prod *= n % 10;
		n /= 10;
	}
	return prod;
}

void missatge(int n, int p) {
	cout << "El producte dels digits de " << n;
	cout << " es " << p << "." << endl;
}

int main() {
	int n;
	while (cin >> n) {
		if (n < 10) {
			missatge(n, n);
		} else {
			while (n >= 10) {
				int p = producte_digits(n);
				missatge(n, p);
				n = p;
			}
		}
		cout << "----------" << endl;
	}
}
