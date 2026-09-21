// Primer digits senars (1,3,5,7,9), després dígits parells positius (2,4,6,8)
// https://jutge.org/problems/X66638_ca
// X66638_ca:std:none:G++17
// Created on 03/11/2025, 18:19:02 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int x;
	while (cin >> x) {
		int yr = 0;
		for (int i = x; i > 0; i /= 10) {
			int d = i % 10;
			if (d % 2 == 0 and d != 0) {
				yr = yr * 10 + d;
			}
		}
		for (int i = x; i > 0; i /= 10) {
			int d = i % 10;
			if (d % 2 == 1) {
				yr = yr * 10 + d;
			}
		}
		int y = 0;
		for (; yr > 0; yr /= 10) {
			y = 10 * y + yr % 10;
		}
		int z = 2 * y;
		cout << y << " " << z << endl;
	}
}
