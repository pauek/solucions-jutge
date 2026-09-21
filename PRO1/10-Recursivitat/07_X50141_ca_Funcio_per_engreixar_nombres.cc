// Funció per engreixar nombres
// https://jutge.org/problems/X50141_ca
// X50141_ca:std:no_main:G++17
// Created on 04/11/2025, 18:01:31 by Pau Fernández

#include <iostream>
using namespace std;

int engreixa(int x) {
	if (x == 0) {
		return 0;
	}
	int E = engreixa(x / 10);
	return E * 10 + max(E % 10, x % 10);
}

int main() {
	int x;
	while (cin >> x) {
		cout << engreixa(x) << endl;
	}
}
