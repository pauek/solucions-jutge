// Factor més frequent
// https://jutge.org/problems/P21281_ca
// P21281_ca:std:no_main:G++17
// Created on 27/10/2025, 17:57:57 by Pau Fernández

#include <iostream>
using namespace std;

void factor(int n, int& f, int& q) {
	f = 0;
	q = 0;

	int factor = 2;
	while (factor * factor <= n) {
		int freq = 0;
		while (n % factor == 0) {
			n /= factor;
			++freq;
		}
		if (freq > q) {
			f = factor;
			q = freq;
		}
		factor++;
	}
	if (q == 0) {
		f = n;
		q = 1;
	}
}

int main() {
	int n;
	while (cin >> n) {
		int f = -1, q = 1000;
		factor(n, f, q);
		cout << f << ' ' << q << endl;
	}
	return 0;
}
