// Primers perfectes
// https://jutge.org/problems/P22467_ca
// P22467_ca:std:no_main:G++17
// Created on 04/11/2025, 18:00:51 by Pau Fernández

#include <iostream>
using namespace std;

bool es_primer(int n) {
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            return false;
        }
    }
    return n > 1;
}

int suma_digits(int n) {
    if (n < 10) {
        return n;
    }
    return n % 10 + suma_digits(n / 10);
}

bool es_primer_perfecte(int n) {
    if (!es_primer(n)) {
        return false;
    } else if (n < 10) {
        return true;
    } else {
        return es_primer_perfecte(suma_digits(n));
    }
}

int main() {
	int n;
	while (cin >> n) {
		cout << (es_primer_perfecte(n) ? "true" : "false") << endl;
	}
	return 0;
}
