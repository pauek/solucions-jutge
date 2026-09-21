// Càlcul d'àrees
// https://jutge.org/problems/P39057_ca
// P39057_ca:std:none:
// Created on 14/10/2025, 19:54:54 by Pau Fernández

#include <cmath>
#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);

	int num_figures;
	cin >> num_figures;

	for (int i = 0; i < num_figures; i++) {
		string figura;
		cin >> figura;
		if (figura == "rectangle") {
			double llargada, amplada;
			cin >> llargada >> amplada;
			cout << llargada * amplada << endl;
		} else if (figura == "cercle") {
			double radi;
			cin >> radi;
			cout << M_PI * radi * radi << endl;
		}
	}
}
