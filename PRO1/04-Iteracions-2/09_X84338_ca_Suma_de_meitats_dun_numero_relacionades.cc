// Suma de meitats d'un número relacionades
// https://jutge.org/problems/X84338_ca
// X84338_ca:std:none:G++17
// Created on 21/10/2025, 20:18:05 by Pau Fernández

#include <iostream>
using namespace std;

int num_xifres(int n) {
	if (n == 0) {
		return 1;
	}
	int xifres = 0;
	while (n > 0) {
		xifres++;
		n /= 10;
	}
	return xifres;
}

int suma_xifres_parcial(int n, int inici, int fi) {
	int suma = 0, i = 0;
	while (n > 0) {
		if (i >= inici && i < fi) {
			suma += n % 10;
		}
		n /= 10;
		i++;
	}
	return suma;
}

char operador_comparacio(int a, int b) {
	if (a == b) {
		return '=';
	} else if (a < b) {
		return '<';
	} else {
		return '>';
	}
}

int main() {
	int n;
	cin >> n;

	int nxifres = num_xifres(n);
	if (nxifres % 2 != 0) {
		cout << "res" << endl;
	} else {
		int s1 = suma_xifres_parcial(n, nxifres / 2, n);
		int s2 = suma_xifres_parcial(n, 0, nxifres / 2);
		char op = operador_comparacio(s1, s2);
		cout << s1 << ' ' << op << ' ' << s2 << endl;
	}
}
