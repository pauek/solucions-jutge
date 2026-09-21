// Nombres en un interval
// https://jutge.org/problems/P97156_ca
// P97156_ca:std:none:
// Created on 14/10/2025, 19:40:01 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int from, to;
	cin >> from >> to;

	if (from <= to) {
		cout << from;
		for (int i = from + 1; i <= to; i++) {
			cout << "," << i;
		}
	}
	cout << endl;
}
