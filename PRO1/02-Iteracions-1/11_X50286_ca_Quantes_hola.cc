// Quàntes hola?
// https://jutge.org/problems/X50286_ca
// X50286_ca:std:none:
// Created on 14/10/2025, 19:53:53 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	string paraula;
	int num_hola = 0;
	while (cin >> paraula) {
		if (paraula == "hola") {
			num_hola++;
		}
	}
	cout << num_hola << endl;
}
