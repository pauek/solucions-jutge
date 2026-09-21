// Màxim comú divisor
// https://jutge.org/problems/P67723_ca
// P67723_ca:std:none:
// Created on 14/10/2025, 20:00:04 by Pau Fernández

#include <iostream>
using namespace std;

int mcd(int a, int b) {
	while (b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << "El mcd de " << a << " i " << b << " es " << mcd(a, b) << "." << endl;
}
