// Totes Creixents
// https://jutge.org/problems/X15059_ca
// X15059_ca:std:none:P1++
// Created on 03/11/2025, 17:26:24 by Pau Fernández

#include <iostream>
using namespace std;

bool sequencia_creixent() {
	double x, last = -1.0;
	while (cin >> x && x != -1.0) {
		if (last != -1.0 && last > x) {
			return false;
		}
        last = x;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	bool totes_creixents = true;
	int i = 0;
	while (totes_creixents && i < n) {
		if (!sequencia_creixent()) {
			totes_creixents = false;
		} else {
			i++;
		}
	}
	cout << (totes_creixents ? "Si" : "No") << endl;
}
