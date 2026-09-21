// I-èsim (3)
// https://jutge.org/problems/P65103_ca
// P65103_ca:std:none:G++17
// Created on 27/10/2025, 18:51:50 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int posicio;
	cin >> posicio;

	int n, i = 0;
	while (i < posicio && cin >> n) {
		i++;
	}

	if (i == posicio && i > 0) {
		cout << "A la posicio " << posicio << " hi ha un " << n << "." << endl;
	} else {
		cout << "Posicio incorrecta." << endl;
	}
}
