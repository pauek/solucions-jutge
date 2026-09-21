// Generant ziga-zaga
// https://jutge.org/problems/X78797_ca
// X78797_ca:std:none:G++17
// Created on 03/11/2025, 18:34:34 by Pau Fernández

#include <iostream>
using namespace std;

void repeat(char c, int times) {
    for (int i = 0; i < times; i++) {
        cout << c;
    }
}

int main() {
	int height, width;
	while (cin >> height >> width) {
		width /= 2;
		int dir = 1, padding = 0;
		for (int k = 0; k < height; k++) {
            repeat('*', padding);
            repeat('#', width);
            repeat('*', width - padding);
			cout << endl;
			if (dir == 1 && padding == width) {
				dir = -1;
			} else if (dir == -1 && padding == 0) {
				dir = 1;
			}
			padding += dir;
		}
		cout << endl;
	}
}