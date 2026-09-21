// Nombres harmònics (1)
// https://jutge.org/problems/P59539_ca
// P59539_ca:std:none:
// Created on 14/10/2025, 19:34:12 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);

	int n;
	cin >> n;

	double Hn = 0.0;
	for (int i = 1; i <= n; i++) {
		Hn += 1.0 / double(i);
	}

	cout << Hn << endl;
}
