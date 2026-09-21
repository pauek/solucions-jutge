// Següent primer
// https://jutge.org/problems/P50095_ca
// P50095_ca:std:none:G++17
// Created on 27/10/2025, 17:58:03 by Pau Fernández

#include <iostream>
using namespace std;

bool es_primer(int N) {
	for (int d = 2; d * d <= N; d++) {
		if (N % d == 0) {
			return false;
		}
	}
	return N > 1;
}

int troba_primer(int n) {
	int i = n + (n == 2 ? 1 : 2);
	while (!es_primer(i)) {
		i += 2;
	}
	return i;
}

int main() {
	int n;
	while (cin >> n && es_primer(n)) {
		cout << troba_primer(n) << endl;
	}
}
