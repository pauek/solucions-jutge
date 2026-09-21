// Rectangles diagonals
// https://jutge.org/problems/P87323_ca
// P87323_ca:std:none:G++17
// Created on 27/10/2025, 17:28:28 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int files, columnes;
	cin >> files >> columnes;

	for (int i = 0; i < files; i++) {
		for (int j = 0; j < columnes; j++) {
			cout << (abs(i - j) % 10);
		}
		cout << endl;
	}
}