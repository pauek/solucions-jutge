// Parèntesis
// https://jutge.org/problems/P31111_ca
// P31111_ca:std:none:G++17
// Created on 27/10/2025, 18:52:01 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int oberts = 0;

	char p;
	while (oberts >= 0 && cin >> p) {
		oberts += p == '(' ? 1 : -1;
	}

	cout << (oberts == 0 ? "si" : "no") << endl;
}