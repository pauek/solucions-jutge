// Control C202C
// https://jutge.org/problems/P12943_ca
// P12943_ca:std:none:
// Created on 20/10/2025, 07:59:29 by Pau Fernández

#include <iostream>
using namespace std;

void mostra_resultat(char c, int rep) {
	cout << "majoria de " << c << endl;
	cout << rep << " repeticio(ns)" << endl;
}

int main() {
	int n;
	cin >> n;

	char c;
	int as = 0, bs = 0, cs = 0;
	while (cin >> c) {
		if (c == 'a') {
			as++;
		} else if (c == 'b') {
			bs++;
		} else if (c == 'c') {
			cs++;
		}
	}

	if (as >= bs && as >= cs) {
		mostra_resultat('a', as);
	} else if (bs >= cs) {
		mostra_resultat('b', bs);
	} else {
		mostra_resultat('c', cs);
	}
}
