// Número del revés en binari
// https://jutge.org/problems/P28754_ca
// P28754_ca:std:none:
// Created on 14/10/2025, 19:42:02 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	if (n == 0) {
		cout << 0;
	} else {
		while (n > 0) {
			cout << n % 2;
			n /= 2;
		}
	}
	cout << endl;
}
