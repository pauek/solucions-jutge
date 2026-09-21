// Dibuixant A's
// https://jutge.org/problems/X46364_ca
// X46364_ca:std:none:G++17
// Created on 03/11/2025, 18:43:32 by Pau Fernández

#include <iostream>
using namespace std;

void print_letter_a(int n) {
	const int Q = (n / 2 + 1);
	const int H = Q * 4;
	for (int j = 0; j < H; j++) {
		int i = 0, limit = H - 1 + j + n - 1;
		while (i <= limit) {
			if (i < H - 1 - j) {
				cout << ' ';
			} else if (i < H - 1 + n - j || i >= H - 1 + j) {
				cout << 'A';
			} else if (j >= Q * 2 && j < Q * 3) {
				cout << 'A';
			} else {
				cout << ' ';
			}
			i++;
		}
		cout << endl;
	}
}

int main() {
	int n;
	while (cin >> n) {
		print_letter_a(n);
		cout << endl;
	}
}
