// Escriviu una creu
// https://jutge.org/problems/P24381_ca
// P24381_ca:std:no_main:G++17
// Created on 27/10/2025, 17:57:34 by Pau Fernández

#include <iostream>
using namespace std;

void cross(int n, char c) {
	for (int i = 0; i < n; i++) {
		if (i == n / 2) {
			cout << string(n, c) << endl;
		} else {
			cout << string(n / 2, ' ') << c << endl;
		}
	}
}

int main() {
	int n;
	char c;
	while (cin >> n >> c) {
		cross(n, c);
	}
	return 0;
}
