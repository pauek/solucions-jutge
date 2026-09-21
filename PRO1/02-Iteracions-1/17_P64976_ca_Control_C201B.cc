// Control C201B
// https://jutge.org/problems/P64976_ca
// P64976_ca:std:none:
// Created on 20/10/2025, 07:50:18 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << n << " x " << (i + 1) << " = " << (i + 1) * n << endl;
	}
}
