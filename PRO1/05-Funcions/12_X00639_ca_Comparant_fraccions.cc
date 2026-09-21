// Comparant fraccions
// https://jutge.org/problems/X00639_ca
// X00639_ca:std:no_main:G++17
// Created on 27/10/2025, 17:57:15 by Pau Fernández

#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2) {
	return n1 * d2 < n2 * d1;
}

int main() {
	int n1, d1, n2, d2;
	while (cin >> n1 >> d1 >> n2 >> d2) {
		cout << (c_frac(n1, d1, n2, d2) ? "si" : "no") << endl;
	}
}
