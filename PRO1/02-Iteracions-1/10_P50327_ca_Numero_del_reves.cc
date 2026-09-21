// Número del revés
// https://jutge.org/problems/P50327_ca
// P50327_ca:std:none:
// Created on 14/10/2025, 19:51:41 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 0) {
		cout << 0;
	} else {
		while (n > 0) {
			cout << n % 10;
			n /= 10;
		}
	}
	cout << endl;
}
