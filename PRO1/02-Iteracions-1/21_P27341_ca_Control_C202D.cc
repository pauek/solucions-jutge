// Control C202D
// https://jutge.org/problems/P27341_ca
// P27341_ca:std:none:
// Created on 20/10/2025, 08:04:49 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		cout << "suma dels cubs entre " << a << " i " << b << ": ";
		int suma_cubs = 0;
		for (int i = a; i <= b; i++) {
			suma_cubs += i * i * i;
		}
		cout << suma_cubs << endl;
	}
}
