// Comptant as (2)
// https://jutge.org/problems/P67454_ca
// --:std:none:G++17
// Created on 27/10/2025, 18:51:10 by Pau Fernández

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