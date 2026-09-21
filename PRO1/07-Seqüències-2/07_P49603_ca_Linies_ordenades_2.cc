// Línies ordenades (2)
// https://jutge.org/problems/P49603_ca
// P49603_ca:std:none:G++17
// Created on 27/10/2025, 19:45:38 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n, linia = 1, ultima = -1;

	while (cin >> n) {
		bool ordenada = true;

		if (n > 0) {
			string s1, s2;
			cin >> s1;
			for (int i = 1; i < n; ++i) {
				cin >> s2;
				ordenada = ordenada && s1 <= s2;
				s1 = s2;
			}
		}
		if (ordenada) {
			ultima = linia;
		}

		linia++;
	}

	if (ultima != -1) {
		cout << "L'ultima linia ordenada creixentment es la " << ultima << "." << endl;
	} else {
		cout << "No hi ha cap linia ordenada creixentment." << endl;
	}
}
