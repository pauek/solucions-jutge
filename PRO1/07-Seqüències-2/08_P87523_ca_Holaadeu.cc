// Hola-adéu
// https://jutge.org/problems/P87523_ca
// P87523_ca:std:none:G++17
// Created on 27/10/2025, 19:45:41 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	char a, b, c;
	if (!(cin >> a >> b >> c)) {
		cout << "adeu" << endl;
		return 0;
	}

	char d;
	bool trobat = false;
	while (!trobat && cin >> d && d != '.') {
		if (a == 'h' and b == 'o' and c == 'l' and d == 'a') {
			trobat = true;
		} else {
			a = b;
			b = c;
			c = d;
		}
	}

	cout << (trobat ? "hola" : "adeu") << endl;
}
