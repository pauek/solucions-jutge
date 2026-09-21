// Codi Cèsar
// https://jutge.org/problems/P33371_ca
// P33371_ca:std:none:G++17
// Created on 27/10/2025, 17:58:08 by Pau Fernández

#include <iostream>
using namespace std;

char codificat(char c, int k) {
	if (c == '_') {
		return ' ';
	}
	if (!islower(c)) {
		return c;
	}
	return ((c - 'a') + k) % 26 + 'A';
}

int main() {
	int k;
	while (cin >> k) {
		char c;
		while (cin >> c && c != '.') {
			cout << codificat(c, k);
		}
		cout << endl;
	}
}
