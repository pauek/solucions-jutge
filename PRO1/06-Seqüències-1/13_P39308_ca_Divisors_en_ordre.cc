// Divisors en ordre
// https://jutge.org/problems/P39308_ca
// P39308_ca:std:none:G++17
// Created on 27/10/2025, 18:52:18 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		cout << "divisors de " << n << ":";
		int d;
		for (d = 1; d * d < n; d++) {
			if (n % d == 0) {
				cout << " " << d;
			}
		}
		if (d * d > n) {
			--d;
		}
		for (; d >= 1; d--) {
			if (n % d == 0) {
				cout << " " << n / d;
			}
		}
		cout << endl;
	}
}
