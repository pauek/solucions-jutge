// Dibuixant A's
// https://jutge.org/problems/X46364_ca
// X46364_ca:std:none:G++17
// Created on 03/11/2025, 18:40:48 by Pau Fernández

#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int height = 0, desp = 0;
		while (desp <= n) {
			height++;
			desp += 2;
		}
		int size = height;
		height *= 4;
		int spaces = height - 1;
		desp = 0;
		for (int i = 0; i < height; i++) {
			cout << string(spaces, ' ');
			int len = desp + n;
			if (len <= 2 * n or (2 * size <= i && i < 3 * size)) {
				cout << string(len, 'A');
			} else {
				cout << string(n, 'A') << string(desp - n, ' ') << string(n, 'A');
			}
			cout << endl;
			desp += 2;
			spaces--;
		}
		cout << endl;
	}
}