// I-èsim (1)
// https://jutge.org/problems/P39225_ca
// P39225_ca:std:none:G++17
// Created on 27/10/2025, 18:51:47 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int posicio;
	cin >> posicio;

	int n, i = 0;
	while (i < posicio && cin >> n && n != -1) {
		++i;
	}

	if (i == posicio) {
		cout << "A la posicio " << posicio;
		cout << " hi ha un " << n << "." << endl;
	}
}
