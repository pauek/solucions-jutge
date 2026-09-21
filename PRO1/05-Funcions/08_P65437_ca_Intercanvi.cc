// Intercanvi
// https://jutge.org/problems/P65437_ca
// P65437_ca:std:no_main:G++17
// Created on 27/10/2025, 17:56:47 by Pau Fernández

#include <iostream>
using namespace std;

void swap2(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int x, y;
	while (cin >> x >> y) {
		swap2(x, y);
		cout << x << " " << y << endl;
	}

	return 0;
}
