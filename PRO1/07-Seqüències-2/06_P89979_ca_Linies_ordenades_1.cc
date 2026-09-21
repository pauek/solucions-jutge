// Línies ordenades (1)
// https://jutge.org/problems/P89979_ca
// P89979_ca:std:none:G++17
// Created on 27/10/2025, 19:45:34 by Pau Fernández

#include <iostream>
using namespace std;

bool linia_ordenada(int n) {
	string p1 = "a", p2;

	bool ordenada = true;
	for (int i = 0; i < n; ++i) {
		cin >> p2;
		if (p2 < p1) {
			ordenada = false;
		}
		p1 = p2;
	}

	return ordenada;
}

int main() {
	int n, index = 0;
	bool trobada = false;

	while (!trobada && cin >> n) {
		trobada = linia_ordenada(n);
		index++;
	}

	if (trobada) {
		cout << "La primera linia ordenada creixentment es la " << index << "." << endl;
	} else {
		cout << "No hi ha cap linia ordenada creixentment." << endl;
	}
}
