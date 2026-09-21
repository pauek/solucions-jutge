// Capicues
// https://jutge.org/problems/P77686_ca
// P77686_ca:std:no_main:G++17
// Created on 27/10/2025, 17:57:11 by Pau Fernández

#include <iostream>
using namespace std;

bool es_capicua(int n) {
	int reves = 0;
	for (int k = n; k > 0; k /= 10) {
		reves = reves * 10 + k % 10;
	}
	return n == reves;
}

int main() {
	int n;
	while (cin >> n) {
		cout << (es_capicua(n) ? "true" : "false") << endl;
	}
	return 0;
}
