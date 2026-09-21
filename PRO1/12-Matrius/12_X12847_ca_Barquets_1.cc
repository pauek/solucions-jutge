// Barquets (1)
// https://jutge.org/problems/X12847_ca
// X12847_ca:std:none:G++17
// Created on 24/11/2025, 21:38:02 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<bool>> Tauler;

struct Pos {
	int i, j;
};

bool llegeix_pos(Pos& pos) {
	char c;
    int j;
	if (!(cin >> c >> j)) {
        return false;
	}
    pos = {tolower(c) - 'a', j - 1};
    return true;
}

void mostra_pos(Pos pos) {
	cout << char('a' + pos.i) << pos.j + 1;
}

void situa_vaixell(Tauler& T, Pos pos, int len, char dir) {
	const int di = (dir == 'h' ? 0 : 1);
	const int dj = (dir == 'h' ? 1 : 0);
	for (int k = 0; k < len; k++) {
		T[pos.i][pos.j] = true;
		pos.i += di;
		pos.j += dj;
	}
}

void mostra_tauler(const Tauler& T) {
	cout << "  12345678910" << endl;
	for (int i = 0; i < 10; i++) {
		cout << char('a' + i) << ' ';
		for (int j = 0; j < 10; j++) {
			cout << (T[i][j] ? 'X' : '.');
		}
		cout << endl;
	}
	cout << endl;
}

bool dins_del_tauler(Pos pos) {
	return pos.i >= 0 && pos.i < 10 && pos.j >= 0 && pos.j < 10;
}

bool cerca_sequencia(const Tauler& T, Pos pos, Pos inc, int len) {
	for (int k = 0; k < len; k++) {
		if (dins_del_tauler(pos) && T[pos.i][pos.j]) {
			return true;
		}
		pos.i += inc.i;
		pos.j += inc.j;
	}
	return false;
}

/**
 * Cerquem una distància constant:
 *
 *     1       2         3
 *    AAA    AAAAA    AAAAAAA
 *    C·D    C   D    C     D
 *    BBB    C · D    C     D
 *           C   D    C  ·  D
 *           BBBBB    C     D
 *                    C     D
 *                    BBBBBBB
 *
 * Hem de recórrer dues files (A, B) i 
 * dues columnes (C, D)
 */
bool cerca_distancia(const Tauler& T, Pos pos, int dist) {
	return /* A */ cerca_sequencia(T, {pos.i - dist, pos.j - dist}, {0, 1}, 2 * dist + 1) ||
		   /* B */ cerca_sequencia(T, {pos.i + dist, pos.j - dist}, {0, 1}, 2 * dist + 1) ||
		   /* C */ cerca_sequencia(T, {pos.i - dist + 1, pos.j - dist}, {1, 0}, 2 * dist - 1) ||
		   /* D */ cerca_sequencia(T, {pos.i - dist + 1, pos.j + dist}, {1, 0}, 2 * dist - 1);
}

/**
 * @pre: suposem que 
 */
int dispara(const Tauler& T, Pos pos) {
    // Tocat
    if (dins_del_tauler(pos) && T[pos.i][pos.j]) {
        return 0;
    }
    // Cerca de la distància mínima
	int dist = 1;
    while (!cerca_distancia(T, pos, dist)) {
        dist++;
    }
    return dist;
}

int main() {
	Tauler T(10, vector<bool>(10, false));

	for (int i = 0; i < 10; i++) {
		Pos pos;
		llegeix_pos(pos);
		int len;
		char dir;
		cin >> len >> dir;
		situa_vaixell(T, pos, len, dir);
	}

	mostra_tauler(T);

	Pos pos;
	while (llegeix_pos(pos)) {
		mostra_pos(pos);
		cout << ' ';
		int dist = dispara(T, pos);
		if (dist == 0) {
			cout << "tocat!" << endl;
		} else {
			cout << "aigua! vaixell mes proper a distancia " << dist << endl;
		}
	}
}