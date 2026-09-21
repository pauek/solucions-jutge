// Nombres perfectes
// https://jutge.org/problems/P34091_ca
// P34091_ca:std:no_main:G++17
// Created on 27/10/2025, 17:57:45 by Pau Fernández

#include <iostream>
using namespace std;

bool es_perfecte(int x) {
	if (x == 1) {
		return false;
	}
	int sum_div = 1;
	for (int d = 2; d * d <= x; d++) {
		if (x % d == 0) {
			sum_div += d + x / d;
		}
	}
	return sum_div == x;
}

int main() {
	int x;
	while (cin >> x) {
		cout << (es_perfecte(x) ? "true" : "false") << endl;
	}
	return 0;
}
