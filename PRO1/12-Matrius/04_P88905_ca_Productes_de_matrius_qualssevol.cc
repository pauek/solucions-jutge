// Productes de matrius qualssevol
// https://jutge.org/problems/P88905_ca
// P88905_ca:std:no_main:G++17
// Created on 24/11/2025, 19:04:20 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Sopa;

Sopa producte(const Sopa& A, const Sopa& B) {
    const int F = A.size(), N = B.size(), C = B[0].size();
    
    Sopa resultat(F, vector<int>(C, 0));
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            for (int k = 0; k < N; k++) {
                resultat[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return resultat;
}
