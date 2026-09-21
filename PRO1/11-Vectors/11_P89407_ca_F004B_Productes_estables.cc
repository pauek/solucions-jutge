// F004B. Productes estables
// https://jutge.org/problems/P89407_ca
// P89407_ca:std:none:G++17
// Created on 22/11/2025, 17:09:15 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

void compta_digits(int n, vector<int>& digits, int base) {
	for (int _n = n; _n > 0; _n /= base) {
		digits[_n % base]++;
	}
}

bool mateixos_digits(int x, int y, int base) {
	vector<int> digits1(16, 0), digits2(16, 0);
	compta_digits(x, digits1, base);
	compta_digits(y, digits1, base);
    compta_digits(x * y, digits2, base);
	return digits1 == digits2;
}

const string digits = "0123456789ABCDEF";

void escriu(int n, int base) {
	if (n > 0) {
		escriu(n / base, base);
		cout << digits[n % base];
	}
}

int main() {
	int x, y;
	while (cin >> x >> y) {
		cout << "solucions per a " << x << " i " << y << endl;
		bool some = false;
		for (int base = 2; base <= 16; base++) {
			if (mateixos_digits(x, y, base)) {
				some = true;
				escriu(x, base);
				cout << " * ";
				escriu(y, base);
				cout << " = ";
				escriu(x * y, base);
				cout << " (base " << base << ")" << endl;
			}
		}
		if (!some) {
			cout << "cap" << endl;
		}
		cout << endl;
	}
}
