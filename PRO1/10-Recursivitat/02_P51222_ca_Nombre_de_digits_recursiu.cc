// Nombre de dígits recursiu
// https://jutge.org/problems/P51222_ca
// P51222_ca:std:no_main:G++17
// Created on 04/11/2025, 17:59:59 by Pau Fernández

#include <iostream>
using namespace std;

// En aquesta funció demanar el nombre de dígits de 0 és *0*,
// perquè és el cas base d'una recursió, i si posem 1 el càlcul 
// surt malament en general. Per això li posem un nom diferent.
//
int nombre_digits__(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + nombre_digits__(n / 10);
}

int nombre_digits(int n) {
    if (n == 0) {
        // El 0 és especial perquè considerem que té una xifra.
        return 1;
    }
    return nombre_digits__(n);
}


int main () {
  int n;
  while (cin >> n) cout << nombre_digits(n) << endl;
  return 0;
}
