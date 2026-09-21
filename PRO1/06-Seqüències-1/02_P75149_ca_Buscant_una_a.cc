// Buscant una a
// https://jutge.org/problems/P75149_ca
// P75149_ca:std:none:G++17
// Created on 27/10/2025, 18:51:15 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	char c;
	cin >> c;
	while (c != 'a' && c != '.') {
		cin >> c;
	}
	cout << (c == 'a' ? "si" : "no") << endl;
}