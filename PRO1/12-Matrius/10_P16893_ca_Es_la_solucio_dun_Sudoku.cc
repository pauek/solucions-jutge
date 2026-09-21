// És la solució d'un Sudoku?
// https://jutge.org/problems/P16893_ca
// P16893_ca:std:none:G++17
// Created on 24/11/2025, 22:17:47 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

Matriu read_sudoku() {
	Matriu M(9, Fila(9));
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> M[i][j];
		}
	}
    return M;
}

bool all_ones(const vector<int>& v) {
	for (int i = 0; i < int(v.size()); i++) {
		if (v[i] != 1) {
			return false;
		}
	}
	return true;
}

bool validate_sudoku(const Matriu& M) {
	Matriu hfiles(9, Fila(9));
	Matriu hcolumnes(9, Fila(9));
	Matriu hboxes(9, Fila(9));

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			hfiles[i][M[i][j] - 1]++;
			hcolumnes[j][M[i][j] - 1]++;
			hboxes[(i / 3) * 3 + j / 3][M[i][j] - 1]++;
		}
	}
	for (int i = 0; i < int(hfiles.size()); i++) {
		if (!all_ones(hfiles[i])) {
			return false;
		}
	}
	for (int j = 0; j < int(hcolumnes.size()); j++) {
		if (!all_ones(hcolumnes[j])) {
			return false;
		}
	}
	for (int k = 0; k < int(hboxes.size()); k++) {
		if (!all_ones(hboxes[k])) {
			return false;
		}
	}

	return true;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << (validate_sudoku(read_sudoku()) ? "si" : "no") << endl;
	}
}