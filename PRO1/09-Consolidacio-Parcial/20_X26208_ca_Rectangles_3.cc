// Rectangles (3)
// https://jutge.org/problems/X26208_ca
// X26208_ca:std:none:G++17
// Created on 03/11/2025, 19:30:29 by Pau Fernández

#include <iostream>
using namespace std;

void rectangle(int n, int m) {
	int aux = 9;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			cout << aux;
            aux = (aux + 9) % 10;
		}
		cout << endl;
	}
}

int main() {
	int k, n, m;
	cin >> k >> n >> m;
	rectangle(n, m);
	for (int i = 1; i < k; ++i) {
		cout << endl;
		rectangle(n, m);
	}
}