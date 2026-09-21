// Generant trenes
// https://jutge.org/problems/X45181_ca
// X45181_ca:std:none:G++17
// Created on 03/11/2025, 18:27:46 by Pau Fernández

#include <iostream>
using namespace std;

void repeat(char c, int times) {
	for (int i = 0; i < times; i++) {
		cout << c;
	}
}

int main() {
	int lines, width, segment;
	while (cin >> lines >> width >> segment) {
		int dir = 1, spaces = 0;
		for (int k = 0; k < lines; k++) {
            repeat(' ', spaces);
            repeat('*', width);
			cout << endl;
			if (dir == 1 and spaces == segment) {
				dir = -1;
			} else if (dir == -1 and spaces == 0) {
				dir = 1;
			}
			spaces += dir;
		}
		cout << endl;
	}
}