// Interessos (1)
// https://jutge.org/problems/P85370_ca
// P85370_ca:std:none:
// Created on 14/10/2025, 20:07:01 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);

	double euros, interes;
	int anys;
	string tipus_interes;
	cin >> euros >> interes >> anys >> tipus_interes;

	if (tipus_interes == "simple") {
		euros += (euros * interes / 100) * anys;
	} else if (tipus_interes == "compost") {
		for (int i = 0; i < anys; i++) {
			euros += euros * interes / 100;
		}
	}

	cout << euros << endl;
}
