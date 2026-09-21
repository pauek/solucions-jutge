// Llegiu un nombre racional (1)
// https://jutge.org/problems/P59652_ca
// P59652_ca:std:no_main:G++17
// Created on 27/10/2025, 17:57:39 by Pau Fernández

#include <iostream>
#include <numeric>
using namespace std;

void read_rational(int& num, int& den) {
	char barra;
	cin >> num >> barra >> den;
	const int mcd = gcd(num, den);
	num /= mcd;
	den /= mcd;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int num, den;
		read_rational(num, den);
		cout << num << ' ' << den << endl;
	}
	return 0;
}
