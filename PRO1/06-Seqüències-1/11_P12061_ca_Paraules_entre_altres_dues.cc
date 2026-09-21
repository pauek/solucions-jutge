// Paraules entre altres dues
// https://jutge.org/problems/P12061_ca
// P12061_ca:std:none:G++17
// Created on 27/10/2025, 18:52:09 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int total = 0;
	bool vist_principi = false;

	string p;
	while (cin >> p and p != "final") {
		if (p == "principi") {
			vist_principi = true;
		} else if (vist_principi) {
			++total;
		}
	}

	if (vist_principi and p == "final") {
		cout << total << endl;
	} else {
		cout << "sequencia incorrecta" << endl;
	}
}
