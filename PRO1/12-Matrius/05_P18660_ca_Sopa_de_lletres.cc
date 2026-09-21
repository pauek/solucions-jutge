// Sopa de lletres
// https://jutge.org/problems/P18660_ca
// P18660_ca:std:none:G++17
// Created on 24/11/2025, 19:06:45 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char>> Sopa;

vector<string> llegeix_paraules(int nparaules) {
	vector<string> paraules(nparaules, "");
	for (int i = 0; i < nparaules; i++) {
		cin >> paraules[i];
	}
	return paraules;
}

Sopa llegeix_sopa(int files, int columnes) {
	Sopa sopa(files, vector<char>(columnes, ' '));
	for (int i = 0; i < files; i++) {
		for (int j = 0; j < columnes; j++) {
			cin >> sopa[i][j];
		}
	}
	return sopa;
}

/**
 * Aquest funció serveix per totes les subseqüències dins la matriux. 
 * Rep unes coordenades inicials i un desplaçament (un vectoret com 
 * (1, 0), (0, 1), (1, 1), ...). Mentre les coordenades estiguin a 
 * dins la sopa de lletres anem cercant, i ens movem fent servir
 * el vectoret.
 */
void cerca_paraula(Sopa& sopa, int i, int j, int di, int dj, string paraula) {
	const int F = sopa.size(), C = sopa[0].size();	// prenem tamanys
	int pos = 0;
	bool trobada = false;
	while (!trobada && 0 <= i && i < F && 0 <= j && j < C) {
		// Comparem en minúscules per si la lletra ja estava
		// en una altra paraula!
		if (tolower(sopa[i][j]) == paraula[pos]) {
			pos++;
			if (pos == int(paraula.size())) {
				trobada = true;
			}
		} else {
			pos = 0;
		}
		i += di;
		j += dj;
	}
	if (trobada) {
		// Tornem enrere passant les lletres a majúscules
		for (int k = 0; k < pos; k++) {
			i -= di;
			j -= dj;
			sopa[i][j] = toupper(sopa[i][j]);
		}
    }
}

void troba_paraules(Sopa& M, const vector<string>& paraules) {
	// Per a cada paraula
	for (int p = 0; p < int(paraules.size()); p++) {
		// Horitzontals + diagonals desde l'esquerra
		for (int i = 0; i < int(M.size()); i++) {
			cerca_paraula(M, i, 0, 0, 1, paraules[p]);
			cerca_paraula(M, i, 0, 1, 1, paraules[p]);
		}
		// Verticals + diagonals desde dalt
		for (int j = 0; j < int(M[0].size()); j++) {
			cerca_paraula(M, 0, j, 1, 0, paraules[p]);
			cerca_paraula(M, 0, j, 1, 1, paraules[p]);
		}
	}
}

void mostra_sopa(const Sopa& sopa) {
	for (int i = 0; i < int(sopa.size()); i++) {
        cout << sopa[i][0];
		for (int j = 1; j < int(sopa[i].size()); j++) {
			cout << ' ' << sopa[i][j];
		}
		cout << endl;
	}
}

int main() {
	int nparaules, files, columnes, sopes = 0;
	while (cin >> nparaules >> files >> columnes) {
        if (sopes > 0) {
            cout << endl; // Maleït Jordi... XD
        }
		vector<string> paraules = llegeix_paraules(nparaules);
		Sopa sopa = llegeix_sopa(files, columnes);
		troba_paraules(sopa, paraules);
		mostra_sopa(sopa);
        sopes++;
	}
}
