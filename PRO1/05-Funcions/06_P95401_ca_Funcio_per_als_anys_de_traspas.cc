// Funció per als anys de traspàs
// https://jutge.org/problems/P95401_ca
// P95401_ca:std:no_main:G++17
// Created on 27/10/2025, 17:56:21 by Pau Fernández

#include <iostream>
using namespace std;

bool es_any_de_traspas(int any) {
	return (any % 4 == 0 && any % 100 != 0) || any % 400 == 0;
}

int main() {
	int a;
	while (cin >> a) {
		cout << (es_any_de_traspas(a) ? "true" : "false") << endl;
	}
	return 0;
}
