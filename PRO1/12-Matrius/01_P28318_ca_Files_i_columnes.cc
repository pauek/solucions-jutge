// Files i Columnes
// https://jutge.org/problems/P28318_ca
// P28318_ca:std:none:G++17
// Created on 24/11/2025, 18:37:24 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Sopa;

Sopa llegeix(int f, int c) {
    Sopa resultat(f, Fila(c, 0));
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            cin >> resultat[i][j];
        }
    }
    return resultat;
}

void mostra_fila(const Sopa& M, int f) {
    cout << "fila " << f << ":";
    const Fila& fila = M[f-1];
    for (int i = 0; i < int(fila.size()); i++) {
        cout << ' ' << fila[i];
    }
    cout << endl;
}

void mostra_columna(const Sopa& M, int c) {
    cout << "columna " << c << ":";
    const int nfiles = M.size(); // prenem l'amplada de la primera fila
    for (int i = 0; i < nfiles; i++) {
        cout << ' ' << M[i][c-1];
    }
    cout << endl;
}

void mostra_element(const Sopa& M, int f, int c) {
    cout << "element " << f << ' ' << c << ": " << M[f-1][c-1] << endl;
}

int main() {
    int f, c;
    cin >> f >> c;

    Sopa M = llegeix(f, c);

    string comanda;
    while (cin >> comanda) {
        if (comanda == "fila") {
            cin >> f;
            mostra_fila(M, f);
        } else if (comanda == "columna") {
            cin >> c;
            mostra_columna(M, c);
        } else {
            cin >> f >> c;
            mostra_element(M, f, c);
        }
    }
}
