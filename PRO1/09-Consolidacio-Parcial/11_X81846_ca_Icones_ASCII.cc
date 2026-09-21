// Icones ASCII
// https://jutge.org/problems/X81846_ca
// X81846_ca:std:none:P1++
// Created on 03/11/2025, 18:38:51 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n, black, white;
	cin >> n;
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < 20; i++) {
			cin >> black >> white;
			string row;
			for (int j = 0; j < 20; j++) {
				bool bitb = black % 2;
				bool bitw = white % 2;
				black /= 2;
				white /= 2;
				char pixel = (bitb ? '#' : bitw ? '.' : ' ');
				if (row != "" || pixel != ' ') {
					row = pixel + row;
				}
			}
			cout << row << endl;
		}
		cout << endl;
	}
}