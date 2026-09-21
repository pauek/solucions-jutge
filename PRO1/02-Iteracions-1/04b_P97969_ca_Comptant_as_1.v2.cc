// Comptant as (1)
// https://jutge.org/problems/P97969_ca
// P97969_ca:std:none:
// Created on 14/10/2025, 19:37:50 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int num_as = 0;
	char c;
	while (cin >> c && c != '.') {
		if (c == 'a') {
			num_as++;
		}
	}
	cout << num_as << endl;
}
