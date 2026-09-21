// Posicions d'un maxim a dues sequencies
// https://jutge.org/problems/X58169_ca
// X58169_ca:std:none:G++17
// Created on 27/10/2025, 17:58:20 by Pau Fernández

#include <iostream>
using namespace std;

void infoSequencia(int& max, int& lpos) {
	max = -1;
	lpos = -1;

	int n, i = 1;
	while (cin >> n && n != 0) {
		if (max <= n) {
			max = n;
			lpos = i;
		}
		i++;
	}
}

int main() {
	int max, lpos;
	infoSequencia(max, lpos);

	int pos = 1, n;
	bool trobat = false;
	cin >> n;
	while (n != 0 && !trobat) {
		if (n == max) {
			trobat = true;
		} else {
			pos++;
			cin >> n;
		}
	}
	cout << max << " " << lpos << " ";
	if (trobat) {
		cout << pos << endl;
	} else {
		cout << "-" << endl;
	}
}
