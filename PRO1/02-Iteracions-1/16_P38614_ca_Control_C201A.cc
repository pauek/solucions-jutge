// Control C201A
// https://jutge.org/problems/P38614_ca
// P38614_ca:std:none:
// Created on 20/10/2025, 07:46:38 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1, x = n, suma = 0;
	while (x > 0) {
		if (i % 2 == 1) {
			suma += x % 10;
		}
		x /= 10;
		i++;
	}

	cout << n << ' ' << (suma % 2 == 0 ? "" : "NO ") << "ES TXATXI" << endl;
}
