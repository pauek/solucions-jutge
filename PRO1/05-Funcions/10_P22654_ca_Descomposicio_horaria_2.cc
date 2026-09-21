// Descomposició horària (2)
// https://jutge.org/problems/P22654_ca
// P22654_ca:std:no_main:G++17
// Created on 27/10/2025, 17:57:06 by Pau Fernández

#include <iostream>
using namespace std;

void descompon(int n, int& h, int& m, int& s) {
	h = n / 3600;
	n %= 3600;
	m = n / 60;
	n %= 60;
	s = n;
}

int main() {
	int n, h, m, s;
	while (cin >> n) {
		descompon(n, h, m, s);
		cout << h << " " << m << " " << s << endl;
	}

	return 0;
}
