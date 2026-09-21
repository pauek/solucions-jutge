// Canvis de base
// https://jutge.org/problems/P56549_ca
// P56549_ca:std:none:G++17
// Created on 04/11/2025, 18:00:32 by Pau Fernández

#include <iostream>
using namespace std;

void mostra_digit(int d) {
	if (d < 10) {
		cout << d;
	} else {
		cout << char(int('A') + d - 10);
	}
}

void mostra_base(int n, int base) {
	if (n == 0) {
		return;
	}
	mostra_base(n / base, base);
	mostra_digit(n % base);
}

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			cout << "0 = 0, 0, 0" << endl;
		} else {
			cout << n << " = ";
			mostra_base(n, 2);
			cout << ", ";
			mostra_base(n, 8);
			cout << ", ";
			mostra_base(n, 16);
			cout << endl;
		}
	}
}
