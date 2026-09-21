// Felicitat i Tristesa (1)
// https://jutge.org/problems/X64929_ca
// X64929_ca:std:none:G++17
// Created on 03/11/2025, 19:16:42 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int happiness = 0, sadness = 0;

	char c1, c2;
	if (cin >> c1 >> c2) {
		char c3;
		while (cin >> c3) {
			if (c2 == '-') {
				if ((c1 == ':' && c3 == ')') || (c1 == '(' && c3 == ':')) {
					happiness++;
				} else if ((c1 == ':' && c3 == '(') || (c1 == ')' && c3 == ':')) {
					sadness++;
				}
			}
			c1 = c2;
			c2 = c3;
		}
	}

	cout << happiness << " " << sadness << endl;
}
