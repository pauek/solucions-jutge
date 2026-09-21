// Diagonals creixents
// https://jutge.org/problems/X17276_ca
// X17276_ca:std:none:G++17
// Created on 24/11/2025, 21:17:38 by Pau Fernández

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

bool creixent(const Matriu& M, int i, int j, int di, int dj) {
    const int F = M.size(), C = M[0].size();
    int last = M[i][j];
    i += di, j += dj;
    while (0 <= i && i < F && 0 <= j && j < C) {
        if (M[i][j] <= last) {
            return false;
        }
        last = M[i][j];
        i += di, j += dj;
    }
    return true;
}

int main() {
    int f, c;
    while (cin >> f >> c) {
        Matriu M = llegeix_matriu(f, c);

        int i, j;
        cin >> i >> j;

        bool diagonals_creixents =
            creixent(M, i, j, 1, 1) &&
            creixent(M, i, j, 1, -1) &&
            creixent(M, i, j, -1, 1) &&
            creixent(M, i, j, -1, -1);

        cout << (diagonals_creixents ? "si" : "no") << endl;
    }
}
