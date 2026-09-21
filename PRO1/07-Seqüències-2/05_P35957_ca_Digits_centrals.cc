// Dígits centrals
// https://jutge.org/problems/P35957_ca
// P35957_ca:std:none:G++17
// Created on 27/10/2025, 19:45:30 by Pau Fernández

#include <iostream>
using namespace std;

int num_digits(int x) {
	int total = x == 0 ? 1 : 0;
	while (x > 0) {
		total++;
		x /= 10;
	}
	return total;
}

int digit_i(int x, int i) {
	while (i > 0) {
		x /= 10;
		i--;
	}
	return x % 10;
}

int central(int x) {
	int m = num_digits(x);
	return (m % 2 == 0 ? -1 : digit_i(x, m / 2));
}

int main() {
	int n, x;
	cin >> n >> x;
	int c = central(x);
	if (c < 0) {
		cout << 'B' << endl;
	} else {
		bool trobat = false;
		int i = 0;
		while (not trobat and i < 2 * n - 1) {
			int y;
			cin >> y;
			if (central(y) != c) {
				trobat = true;
			} else {
				++i;
			}
		}

		if (trobat) {
			cout << char('A' + i % 2) << endl;
		} else {
			cout << '=' << endl;
		}
	}
}
