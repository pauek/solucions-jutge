// Dates vàlides
// https://jutge.org/problems/P58459_ca
// P58459_ca:std:no_main:G++17
// Created on 27/10/2025, 17:56:39 by Pau Fernández

#include <iostream>
using namespace std;

bool es_any_de_traspas(int any) {
	return (any % 4 == 0 && any % 100 != 0) || any % 400 == 0;
}

int dies_mes(int mes, int any) {
	if (mes == 2) {
		return es_any_de_traspas(any) ? 29 : 28;
	} else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
		return 30;
	} else {
		return 31;
	}
}

bool es_data_valida(int dia, int mes, int any) {
	if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || any < 1800 || any > 9999) {
		return false;
	}
	return dia >= 1 && dia <= dies_mes(mes, any);
}

int main() {
	int d, m, a;
	while (cin >> d >> m >> a) {
		cout << (es_data_valida(d, m, a) ? "true" : "false") << endl;
	}
	return 0;
}
