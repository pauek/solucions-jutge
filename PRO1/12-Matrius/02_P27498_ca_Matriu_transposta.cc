// Matriu transposta
// https://jutge.org/problems/P27498_ca
// P27498_ca:std:no_main:G++17
// Created on 24/11/2025, 18:54:25 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Sopa;

void transposa(Sopa& M) {
    const int N = M.size();
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            swap(M[i][j], M[j][i]);
        }
    }
}
