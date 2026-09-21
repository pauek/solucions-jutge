// Dates correctes
// https://jutge.org/problems/P29448_ca
// P29448_ca:std:none:
// Created on 14/10/2025, 20:01:59 by Pau Fernández

#include <iostream>
using namespace std;

bool de_traspas(int any) {
	return (any % 4 == 0 && any % 100 != 0) || any % 400 == 0;
}

int dies_mes(int mes, int any) {
	if (mes == 2) {
		return de_traspas(any) ? 29 : 28;
	} else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
		return 30;
	} else {
		return 31;
	}
}

bool data_correcta(int dia, int mes, int any) {
	if (mes < 1 || mes > 12) {
		return false;
	}
	int limit_mes = dies_mes(mes, any);
	return dia >= 1 && dia <= limit_mes;
}

int main() {
	int dia, mes, any;
	while (cin >> dia >> mes >> any) {
		cout << "Data " << (data_correcta(dia, mes, any) ? "Correcta" : "Incorrecta") << endl;
	}
}
