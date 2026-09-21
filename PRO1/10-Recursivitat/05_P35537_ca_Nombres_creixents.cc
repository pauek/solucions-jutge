// Nombres creixents
// https://jutge.org/problems/P35537_ca
// P35537_ca:std:no_main:G++17
// Created on 04/11/2025, 18:00:44 by Pau Fernández

#include <iostream>
using namespace std;

bool es_creixent(int n) {
	if (n < 10) {
		return true;
	}
	int dre = n % 10;
	int esq = n / 10 % 10;
	if (esq > dre) {
		return false;
	}
	return es_creixent(n / 10);
}

int main() {
	int n;
	while (cin >> n) {
		cout << (es_creixent(n) ? "true" : "false") << endl;
	}
	return 0;
}
