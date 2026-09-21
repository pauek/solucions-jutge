// Triangle
// https://jutge.org/problems/P29973_ca
// P29973_ca:std:none:G++17
// Created on 21/10/2025, 20:38:18 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << string(i, '*') << endl;
	}
}
