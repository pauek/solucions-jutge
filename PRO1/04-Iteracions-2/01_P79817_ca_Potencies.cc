// Potències
// https://jutge.org/problems/P79817_ca
// P79817_ca:std:none:G++17
// Created on 27/10/2025, 17:08:22 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		int p = 1;
		for (int i = 0; i < b; i++) {
			p *= a;
		}
		cout << p << endl;
	}
}