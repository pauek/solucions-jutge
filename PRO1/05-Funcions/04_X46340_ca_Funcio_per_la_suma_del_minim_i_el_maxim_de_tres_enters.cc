// Funció per la suma del mínim i el màxim de tres enters
// https://jutge.org/problems/X46340_ca
// X46340_ca:std:no_main:G++17
// Created on 27/10/2025, 17:56:04 by Pau Fernández

#include <iostream>
using namespace std;

void ordena(int& a, int& b, int& c) {
	if (a > b) {
		swap(a, b);
	}
	if (a > c) {
		swap(a, c);
	}
	if (b > c) {
		swap(b, c);
	}
}

int sum_min_max(int x, int y, int z) {
	ordena(x, y, z);
	return x + z;
}

int main() {
	int x, y, z;
	while (cin >> x >> y >> z) {
		cout << sum_min_max(x, y, z) << endl;
	}
}
