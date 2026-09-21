// Rectangles (2)
// https://jutge.org/problems/X59091_ca
// X59091_ca:std:none:G++17
// Created on 27/10/2025, 17:21:14 by Pau Fernández

#include <iostream>
using namespace std;

void rectangle(int files, int columnes) {
	int d = 9;
	for (int i = 0; i < files; ++i) {
		for (int j = 0; j < columnes; ++j) {
			cout << d;
			d = (d + 9) % 10;
		}
		cout << endl;
	}
}

int main() {
	int n, m;
	if (cin >> n >> m) {
		rectangle(n, m);
	}
	while (cin >> n >> m) {
		cout << endl;
		rectangle(n, m);
	}
}