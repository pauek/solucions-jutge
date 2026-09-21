// Cruz recursiva
// https://jutge.org/problems/P43260_es
// P43260_es:std:none:G++17
// Created on 24/11/2025, 22:04:26 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

typedef vector<string> Matriu;

void copia(Matriu& M, Matriu& m, int x, int y) {
	const int F = m.size(), C = m[0].size();
	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			M[x + i][y + j] = m[i][j];
		}
	}
}

Matriu cruz(int n) {
	if (n == 1) {
		return {" | ", "-O-", " | "};
	}
	Matriu small = cruz(n - 1);
    const int sz = small.size();

	Matriu result(3 * sz, string(3 * sz, ' '));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 || j == 1) {
				copia(result, small, i * sz, j * sz);
			}
		}
	}
	return result;
}

void show(const Matriu& M) {
	for (int i = 0; i < int(M.size()); i++) {
		cout << '|' << M[i] << '|' << endl;
	}
}

int main() {
	int n;
	cin >> n;
	show(cruz(n));
}
