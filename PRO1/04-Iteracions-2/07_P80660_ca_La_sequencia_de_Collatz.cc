// La seqüència de Collatz
// https://jutge.org/problems/P80660_ca
// P80660_ca:std:none:G++17
// Created on 21/10/2025, 20:07:23 by Pau Fernández

#include <iostream>
using namespace std;

int collatz_length(int n) {
	int times = 0;
	while (n != 1) {
		n = (n % 2 == 0 ? n / 2 : 3 * n + 1);
		times++;
	}
	return times;
}

int main() {
	int n;
	while (cin >> n) {
		cout << collatz_length(n) << endl;
	}
}
