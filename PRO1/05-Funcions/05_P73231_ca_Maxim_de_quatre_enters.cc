// Màxim de quatre enters
// https://jutge.org/problems/P73231_ca
// P73231_ca:std:no_main:G++17
// Created on 27/10/2025, 17:56:12 by Pau Fernández

#include <iostream>
using namespace std;

int max4(int a, int b, int c, int d) {
	return max(max(a, b), max(c, d));
}

int main() {
	int a, b, c, d;
	while (cin >> a >> b >> c >> d) {
		cout << max4(a, b, c, d) << endl;
	}
	return 0;
}
