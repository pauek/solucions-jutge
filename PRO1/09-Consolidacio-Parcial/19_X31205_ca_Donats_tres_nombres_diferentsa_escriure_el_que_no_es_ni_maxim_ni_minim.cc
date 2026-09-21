// Donats tres nombres diferents, escriure el que no és ni màxim ni mínim
// https://jutge.org/problems/X31205_ca
// X31205_ca:std:none:G++17
// Created on 03/11/2025, 19:28:37 by Pau Fernández

#include <iostream>
using namespace std;

void ordena(int& a, int& b, int& c) {
	if (a > b) {
		swap(a, b);
	}
	if (a > c) {
		swap(a, c);
	}
	if (b > c) {
		swap(b, c);
	}
}

int main() {
	int a, b, c;
	while (cin >> a >> b >> c) {
        ordena(a, b, c);
		cout << b << endl;
	}
}
