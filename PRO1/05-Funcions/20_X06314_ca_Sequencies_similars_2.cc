// Seqüències similars (2)
// https://jutge.org/problems/X06314_ca
// X06314_ca:std:none:G++17
// Created on 27/10/2025, 17:58:14 by Pau Fernández

#include <iostream>
using namespace std;

void info_sequencia(int& suma, int& ultim) {
	int n;
	while (cin >> n && n != 0) {
		suma += n;
		ultim = n;
	}
}

int main() {
	int n;
	cin >> n;

	int suma1 = n;
	int ultim1 = n;
	info_sequencia(suma1, ultim1);

	int total = 1;
	cin >> n;
	while (n != 0) {
		int suma2 = n;
		int ultim2 = n;
		info_sequencia(suma2, ultim2);
		if (suma1 == suma2 and ultim1 == ultim2) {
			++total;
		}
		cin >> n;
	}
	cout << total << endl;
}