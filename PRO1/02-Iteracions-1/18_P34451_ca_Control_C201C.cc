// Control C201C
// https://jutge.org/problems/P34451_ca
// P34451_ca:std:none:
// Created on 20/10/2025, 07:52:02 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;

	int n, num_multiples = 0;
	while (cin >> n) {
		if (n % x == 0) {
			num_multiples++;
		}
	}

	cout << num_multiples << endl;
}
