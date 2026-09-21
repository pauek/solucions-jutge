// Cap avall
// https://jutge.org/problems/P59875_ca
// P59875_ca:std:none:
// Created on 14/10/2025, 19:36:08 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int start, end;
	cin >> start >> end;

	if (start < end) {
		swap(start, end);
	}

	for (int i = start; i >= end; i--) {
		cout << i << endl;
	}
}
