// Factorial iteratiu
// https://jutge.org/problems/P57474_ca
// P57474_ca:std:no_main:G++17
// Created on 27/10/2025, 17:57:01 by Pau Fernández

#include <iostream>
using namespace std;

int factorial(int n) {
	int resultat = 1;
	for (int i = 2; i <= n; i++) {
		resultat *= i;
	}
	return resultat;
}

int main() {
	int x;
	while (cin >> x) {
		cout << factorial(x) << endl;
	}
	return 0;
}
