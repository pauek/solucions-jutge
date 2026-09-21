// Rectangle contenidor
// https://jutge.org/problems/P92844_ca
// P92844_ca:std:no_main:G++17
// Created on 24/11/2025, 21:04:42 by Pau Fernández
#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Rectangle;

bool contains(const Rectangle& R, char c, int i, int j, int di, int dj) {
	const int F = R.size(), C = R[0].size();
	while (0 <= i && i < F && 0 <= j && j < C) {
		if (R[i][j] == c) {
			return true;
		}
		i += di;
		j += dj;
	}
	return false;
}

struct Subrect {
	int rows, cols;
};

void dimensions_minimes(char c, const Rectangle& R, int& rows, int& cols) {
	const int P = R.size(), Q = R[0].size();

	int imin = 0;
	while (!contains(R, c, imin, 0, 0, 1)) {
		imin++;
	}

	int imax = P - 1;
	while (!contains(R, c, imax, 0, 0, 1)) {
		imax--;
	}

	int jmin = 0;
	while (!contains(R, c, 0, jmin, 1, 0)) {
		jmin++;
	}

	int jmax = Q - 1;
	while (!contains(R, c, 0, jmax, 1, 0)) {
		jmax--;
	}

	rows = imax - imin + 1;
    cols = jmax - jmin + 1;
}
