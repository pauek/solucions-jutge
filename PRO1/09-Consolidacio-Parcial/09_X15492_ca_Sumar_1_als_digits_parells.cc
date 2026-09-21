// Sumar 1 als dígits parells
// https://jutge.org/problems/X15492_ca
// X15492_ca:std:none:G++17
// Created on 03/11/2025, 18:30:54 by Pau Fernández

#include <iostream>
using namespace std;

int reverse(int n) {
	int result = 0;
	for (int i = n; i > 0; i /= 10) {
		result = 10 * result + i % 10;
	}
	return result;
}

int suma_digits_parells(int a) {
	int r = 0;
	for (int n = a; n > 0; n /= 10) {
		int d = n % 10;
		r = 10 * r + d + (d % 2 == 0 ? 1 : 0);
	}
    return reverse(r);
}

int main() {
	int a;
	while (cin >> a) {
		cout << suma_digits_parells(a) << endl;
	}
}
