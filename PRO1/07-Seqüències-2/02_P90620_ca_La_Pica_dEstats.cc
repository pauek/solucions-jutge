// La Pica d'Estats
// https://jutge.org/problems/P90620_ca
// P90620_ca:std:none:G++17
// Created on 27/10/2025, 19:45:12 by Pau Fernández

#include <iostream>
using namespace std;

const int PICA_DESTATS = 3143;

int main() {
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	bool existeix = false;
	while (!existeix && n3 > 0) {
		if (n1 < n2 && n2 > n3 && n2 > PICA_DESTATS) {
			existeix = true;
		} else {
			n1 = n2;
			n2 = n3;
			cin >> n3;
		}
	}
	cout << (existeix ? "SI" : "NO") << endl;
}
