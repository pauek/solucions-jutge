// Posicions parelles relacionades
// https://jutge.org/problems/X32179_ca
// X32179_ca:std:none:G++17
// Created on 21/10/2025, 20:26:25 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int primer, segon;
	cin >> primer >> segon;

	int _, x, quants = 1;
	while (cin >> _ >> x) {
		if (x == segon) {
			quants++;
		}
	}
	cout << quants << endl;
}
