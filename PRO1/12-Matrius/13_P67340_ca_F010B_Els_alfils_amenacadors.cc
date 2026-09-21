// F010B. Els alfils amenaçadors
// https://jutge.org/problems/P67340_ca
// P67340_ca:std:none:G++17
// Created on 24/11/2025, 22:23:37 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<bool>> Taulell;

Taulell llegeix_taulell(int f, int c) {
	Taulell T(f, vector<bool>(c, false));
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			char ch;
			cin >> ch;
			T[i][j] = ch == 'X';
		}
	}
	return T;
}

bool amenaces(const Taulell& T, int i, int j, int di, int dj, int& x, int& y) {
	if (!T[i][j]) {
		return false;
	}
	i += di, j += dj;
	const int F = T.size(), C = T[0].size();
	while (0 <= i && i < F && 0 <= j && j < C) {
		if (T[i][j]) {
			x = i;
			y = j;
			return true;
		}
		i += di, j += dj;
	}
	return false;
}

void reporta(int i, int j, int x, int y) {
	cout << '(' << i + 1 << ',' << j + 1 << ")<->(" << x + 1 << ',' << y + 1 << ')' << endl;
}

int main() {
	int f, c;
	cin >> f >> c;
	Taulell T = llegeix_taulell(f, c);
	const int F = T.size(), C = T[0].size();

	for (int i = 0; i < F; i++) {
		for (int j = 0; j < C; j++) {
			int x, y;
            if (amenaces(T, i, j, 1, 1, x, y)) {
                reporta(i, j, x, y);
            }
            if (amenaces(T, i, j, 1, -1, x, y)) {
                reporta(i, j, x, y);
            }
			if (amenaces(T, i, j, -1, 1, x, y)) {
				reporta(i, j, x, y);
			}
			if (amenaces(T, i, j, -1, -1, x, y)) {
				reporta(i, j, x, y);
			}
		}
	}
}
