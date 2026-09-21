// Control C401B
// https://jutge.org/problems/P42596_ca
// P42596_ca:std:none:G++17
// Created on 24/11/2025, 21:24:33 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

Matriu llegeix_matriu(int f, int c) {
	Matriu M(f, vector<int>(c, 0));
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			cin >> M[i][j];
		}
	}
	return M;
}

void min_max(const Matriu& M, int& minim, int& maxim) {
	const int F = M.size(), C = M[0].size();
	maxim = M[0][0];
	minim = M[0][0];
	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			maxim = max(maxim, M[i][j]);
			minim = min(minim, M[i][j]);
		}
	}
}

int main() {
	int index = 1, f, c, max_dif = -1, max_index = -1;
	while (cin >> f >> c) {
		Matriu M = llegeix_matriu(f, c);
		int minim, maxim;
		min_max(M, minim, maxim);
		const int dif = maxim - minim;
		if (dif > max_dif) {
			max_dif = dif;
			max_index = index;
		}
		index++;
	}
	cout << "la diferencia maxima es " << max_dif << endl;
	cout << "la primera matriu amb aquesta diferencia es la " << max_index << endl;
}
