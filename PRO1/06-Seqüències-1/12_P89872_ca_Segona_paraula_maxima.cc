// Segona paraula màxima
// https://jutge.org/problems/P89872_ca
// P89872_ca:std:none:G++17
// Created on 27/10/2025, 18:52:13 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	string first;
	cin >> first;

	string w, second;
	while (cin >> w) {
		if (w > first) {
			second = first;
			first = w;
		} else if (w < first && w > second) {
			second = w;
		}
	}

	cout << second << endl;
}
