// Camps
// https://jutge.org/problems/P45829_ca
// P45829_ca:std:none:G++17
// Created on 24/11/2025, 20:46:33 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

/*

Truc! Comptarem les *cantonades* de baix a la dreta:

N0
00

perquè ens asseguren que els camps sempre són consistents dins d'un matriu.
Cada cantonada és única i cada camp només en té una!

Però per assegurar que sempre hi són hem d'afegir una fila i una columna amb zeros
perquè alguns camps arriben fins als extrems.

*/
int main() {
	int f, c;
	while (cin >> f >> c) {
		// Llegim en una matriu amb 1 fila i 1 columna més
		vector<vector<int>> camps(f + 1, vector<int>(c + 1, 0));
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) {
				cin >> camps[i][j];
			}
		}

		// Comptem les cantonades
		int num_camps = 0;
		for (int i = 0; i < f; i++) {
			for (int j = 0; j < c; j++) {
				if (camps[i][j] != 0 && camps[i + 1][j] == 0 && camps[i][j + 1] == 0 &&
					camps[i + 1][j + 1] == 0) {
					num_camps++;
				}
			}
		}

		cout << num_camps << endl;
	}
}
