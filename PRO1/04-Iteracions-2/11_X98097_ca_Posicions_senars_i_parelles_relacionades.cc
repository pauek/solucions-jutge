// Posicions senars i parelles relacionades
// https://jutge.org/problems/X98097_ca
// X98097_ca:std:none:G++17
// Created on 21/10/2025, 20:28:39 by Pau Fernández

#include <iostream>
using namespace std;

struct Sumes {
	int sen, par;
};

Sumes suma_xifres_parelles_i_senars(int n) {
	Sumes resultat = {0, 0};
	int i = 1;
	while (n > 0) {
		if (i % 2 == 0) {
			resultat.par += n % 10;
		} else {
			resultat.sen += n % 10;
		}
		n /= 10;
		i++;
	}
	return resultat;
}

int main() {
	int n;
	cin >> n;

	Sumes s = suma_xifres_parelles_i_senars(n);
	cout << s.sen << ' ' << s.par << endl;
	if (s.sen == 0 || (s.par != 0 && s.sen % s.par == 0)) {
		cout << s.sen << " = " << s.sen / s.par << " * " << s.par;
	} else if (s.par == 0 || (s.par && s.par % s.sen == 0)) {
		cout << s.par << " = " << s.par / s.sen << " * " << s.sen;
	} else {
		cout << "res";
	}
	cout << endl;
}
