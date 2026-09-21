// Paraules consecutives repetides
// https://jutge.org/problems/P23001_ca
// P23001_ca:std:none:G++17
// Created on 27/10/2025, 18:52:05 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int max_len = 1, len = 1;
	string first, w;
	cin >> first;
	while (cin >> w) {
		if (w != first) {
			len = 0;
		} else {
			++len;
			max_len = max(max_len, len);
		}
	}
	cout << max_len << endl;
}
