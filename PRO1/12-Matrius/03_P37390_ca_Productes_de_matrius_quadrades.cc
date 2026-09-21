// Productes de matrius quadrades
// https://jutge.org/problems/P37390_ca
// P37390_ca:std:no_main:G++17
// Created on 24/11/2025, 18:55:59 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Sopa;

Sopa producte(const Sopa& A, const Sopa& B) {
    const int N = A.size();
    
    Sopa resultat(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                resultat[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return resultat;
}
