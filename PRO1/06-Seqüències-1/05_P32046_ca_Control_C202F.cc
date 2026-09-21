// Control C202F
// https://jutge.org/problems/P32046_ca
// P32046_ca:std:none:G++17
// Created on 27/10/2025, 18:51:36 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int p;
	cin >> p;
	cout << "nombres que acaben igual que " << p << ":" << endl;

	int x, total = 0;
	while (cin >> x) {
		if (x % 1000 == p % 1000) {
			cout << x << endl;
			total++;
		}
	}
	cout << "total: " << total << endl;
}
