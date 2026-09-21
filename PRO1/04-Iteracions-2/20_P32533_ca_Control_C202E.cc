// Control C202E
// https://jutge.org/problems/P32533_ca
// P32533_ca:std:none:G++17
// Created on 27/10/2025, 17:32:25 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + j == n - 1) {
				cout << '/';
			} else if (i + j < n) {
				cout << '+';
			} else {
				cout << '*';
			}
		}
		cout << endl;
	}
}
