// Factorial recursiu
// https://jutge.org/problems/P12509_ca
// P12509_ca:std:no_main:G++17
// Created on 04/11/2025, 17:59:47 by Pau Fernández

#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	return n * factorial(n - 1);
}

int main() {
	int x;
	while (cin >> x) {
		cout << factorial(x) << endl;
	}
	return 0;
}
