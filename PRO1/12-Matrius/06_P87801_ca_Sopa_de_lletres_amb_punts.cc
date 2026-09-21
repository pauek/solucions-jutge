// Sopa de lletres amb punts
// https://jutge.org/problems/P87801_ca
// P87801_ca:std:none:G++17
// Created on 24/11/2025, 19:53:39 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

/*

Podem aprofitar gairebé tot el programa del problema "Sopa de lletres":
- Lectura de les paraules (`llegeix_paraules`).
- Lectura de la sopa (`llegeix_sopa`).
- La cerca d'una paraula (`cerca_paraula`).
- La cerca de totes (`troba_paraules`).

Modificacions que cal fer:
1. Fer que cada casella de la matriu tingui la lletra _i_ els punts (fem una tupla `Casella`).
2. Llegir els punts, en una función nova que només omple el camp `punts` de la tupla.
3. La cerca no ha de posar les majúscules, sinó calcular punts, però l'algorisme és semblant.
4. Cal canviar `troba_paraules` perquè només en busqui una i retorni el màxim nombre de punts només
per aquella.
5. Cal fer una funció per mirar a partir d'una certa posició. En la sopa de lletres anterior, no és
normal que surti un nom solapat amb un altre, però en aquest problema sí! ("aaa" conté "aa" dos cops!)
6. Cal modificar el `main` per l'ordre de les operacions, incloent el fet de fer una
iteració per totes les paraules, mostrant el resultat de cadascuna.

 */

struct Casella {
	char lletra;
	int punts;
};

typedef vector<vector<Casella>> Sopa;

vector<string> llegeix_paraules(int nparaules) {
	vector<string> paraules(nparaules, "");
	for (int i = 0; i < nparaules; i++) {
		cin >> paraules[i];
	}
	return paraules;
}

Sopa llegeix_sopa(int files, int columnes) {
	Sopa sopa(files, vector<Casella>(columnes, {' ', 0}));
	for (int i = 0; i < files; i++) {
		for (int j = 0; j < columnes; j++) {
			cin >> sopa[i][j].lletra;
		}
	}
	return sopa;
}

void llegeix_punts(Sopa& sopa) {
	for (int i = 0; i < int(sopa.size()); i++) {
		for (int j = 0; j < int(sopa[0].size()); j++) {
			cin >> sopa[i][j].punts;
		}
	}
}

int punts(const Sopa& sopa, int size, int i, int j, int di, int dj) {
	// Tornem enrere passant les lletres a majúscules
	int punts = 0;
	for (int k = 0; k < size; k++) {
		punts += sopa[i][j].punts;
		i -= di;
		j -= dj;
	}
	return punts;
}

int cerca_desde(const Sopa& sopa, int i, int j, int di, int dj, string paraula) {
	const int F = sopa.size(), C = sopa[0].size();
    int punts = 0, pos = 0;
    while (pos < int(paraula.size()) && 0 <= i && i < F && 0 <= j && j < C) {
		if (sopa[i][j].lletra != paraula[pos]) {
            return -1;
        }
        pos++;
        punts += sopa[i][j].punts;
		i += di;
		j += dj;
	}
    return (pos == int(paraula.size()) ? punts : -1);
}

void cerca_paraula(const Sopa& sopa, int i, int j, int di, int dj, string paraula, int& max_punts) {
	const int F = sopa.size(), C = sopa[0].size();	// prenem tamanys
	while (0 <= i && i < F && 0 <= j && j < C) {
		max_punts = max(max_punts, cerca_desde(sopa, i, j, di, dj, paraula));
		i += di;
		j += dj;
	}
}

int max_punts_paraula(const Sopa& M, const string paraula) {
	int max_punts = -1;

	// Horitzontals + diagonals desde l'esquerra
	for (int i = 0; i < int(M.size()); i++) {
		cerca_paraula(M, i, 0, 0, 1, paraula, max_punts);
	}
	// Verticals + diagonals desde dalt
	for (int j = 0; j < int(M[0].size()); j++) {
		cerca_paraula(M, 0, j, 1, 0, paraula, max_punts);
	}

	return max_punts;
}

int main() {
	int files, columnes;
	while (cin >> files >> columnes) {
		Sopa sopa = llegeix_sopa(files, columnes);
		llegeix_punts(sopa);

		int n;
		cin >> n;
		vector<string> paraules = llegeix_paraules(n);

		// Per a cada paraula
		for (int p = 0; p < int(paraules.size()); p++) {
			int max_punts = max_punts_paraula(sopa, paraules[p]);
			if (max_punts == -1) {
				cout << "no" << endl;
			} else {
				cout << max_punts << endl;
			}
		}
	}
}
