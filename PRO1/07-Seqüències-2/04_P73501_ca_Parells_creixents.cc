// Parells creixents
// https://jutge.org/problems/P73501_ca
// P73501_ca:std:none:G++17
// Created on 27/10/2025, 19:45:24 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int total = 0;

		int a, b;
		cin >> a;
		if (a != 0) {
			cin >> b;
			while (b != 0) {
				if (a < b) {
					++total;
				}
				a = b;
				cin >> b;
			}
		}

		cout << total << endl;
	}
}
