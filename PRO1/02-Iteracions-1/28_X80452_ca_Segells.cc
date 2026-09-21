// Segells
// https://jutge.org/problems/X80452_ca
// X80452_ca:std:none:
// Created on 20/10/2025, 09:05:47 by Pau Fernández

#include <iostream>
using namespace std;

/*

- Donat un nombre de segells de 7, puc calcular quants de 4 necessito per
  cobrir el que queda (tot i que ens podem passar del preu).

- Per esbrinar quina combinació dóna el preu just, les haig de provar
  totes.

- Per minimitzar el nombre de segells, cal posar el màxim de segells de 7
  que poguem.

Per tant, faig una iteració des del màxim de segells de 7 fins el mínim,
i la resta amb segells de 4, sense passar-se del preu. En el moment en què
el preu sigui exacte, tinc la meva combinació.

*/

struct Segells {
	int de7, de4;
};

Segells minimitza_segells(int preu) {
	for (int p = preu / 7; p >= 0; p--) {
		int q = (preu - p * 7) / 4;
		if (preu == (p * 7 + q * 4)) {
			return {p, q};
		}
	}
	return {-1, -1};
}

int main() {
	int preu;
	while (cin >> preu) {
		Segells segells = minimitza_segells(preu);
		cout << segells.de7 << ' ' << segells.de4 << endl;
	}
}
