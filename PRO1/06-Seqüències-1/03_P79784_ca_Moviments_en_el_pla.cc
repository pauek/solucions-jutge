// Moviments en el pla
// https://jutge.org/problems/P79784_ca
// P79784_ca:std:none:G++17
// Created on 27/10/2025, 18:51:21 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int x = 0, y = 0;
	char c;
	while (cin >> c) {
		if (c == 'n') {
			y--;
		} else if (c == 's') {
			y++;
		} else if (c == 'e') {
			x++;
		} else {
			x--;
		}
	}
	cout << "(" << x << ", " << y << ")" << endl;
}
