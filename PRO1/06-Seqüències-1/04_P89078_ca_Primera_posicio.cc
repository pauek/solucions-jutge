// Primera posició
// https://jutge.org/problems/P89078_ca
// P89078_ca:std:none:G++17
// Created on 27/10/2025, 18:51:31 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int x, pos = 1;
	while (cin >> x && x % 2 == 1) {
		pos++;
	}
	cout << pos << endl;
}
