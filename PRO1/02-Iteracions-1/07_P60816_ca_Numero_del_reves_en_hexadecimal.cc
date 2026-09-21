// Número del revés en hexadecimal
// https://jutge.org/problems/P60816_ca
// P60816_ca:std:none:
// Created on 14/10/2025, 19:45:21 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 0) {
		cout << 0;
	} else {
		while (n > 0) {
			int digit = n % 16;
			if (digit < 10) {
				cout << digit;
			} else {
				cout << char(int('A') + (digit - 10));
			}
			n /= 16;
		}
	}
	cout << endl;
}
