// Nombres Doblegats
// https://jutge.org/problems/X43287_ca
// X43287_ca:std:none:P1++
// Created on 03/11/2025, 17:51:45 by Pau Fernández

#include <iostream>
using namespace std;

int num_xifres(int n) {
	int result = 0;
	for (int i = n; i > 0; i /= 10) {
		result++;
	}
	return result;
}

int doblega(int n, int xifres) {
	int resultat = 0, p = 1;
    int middle = xifres % 2 == 1 ? xifres / 2 : xifres / 2 - 1;
	for (int i = 0; i < xifres; i++) {
		resultat += (n % 10) * p;
		n /= 10;
		if (i < middle) {
			p *= 10;
		} else if (i >= xifres / 2) {
			p /= 10;
		}
	}
	return resultat;
}

int main() {
	int n;
	while (cin >> n) {
		cout << n << " -> " << doblega(n, num_xifres(n)) << endl;
	}
}