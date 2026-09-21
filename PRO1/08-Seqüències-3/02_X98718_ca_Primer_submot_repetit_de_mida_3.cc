// Primer submot repetit de mida 3
// https://jutge.org/problems/X98718_ca
// X98718_ca:std:none:G++17
// Created on 03/11/2025, 17:14:54 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int aaa = 0, aab = 0, aba = 0, abb = 0, baa = 0, bab = 0, bba = 0, bbb = 0;
	int pos = 0;
	bool found = false;

	char c1, c2, c3;
	cin >> c1 >> c2;

	while (!found && cin >> c3) {
		if (c1 == 'a' && c2 == 'a' && c3 == 'a') {
			aaa++;
		} else if (c1 == 'a' && c2 == 'a' && c3 == 'b') {
			aab++;
		} else if (c1 == 'a' && c2 == 'b' && c3 == 'a') {
			aba++;
		} else if (c1 == 'a' && c2 == 'b' && c3 == 'b') {
			abb++;
		} else if (c1 == 'b' && c2 == 'a' && c3 == 'a') {
			baa++;
		} else if (c1 == 'b' && c2 == 'a' && c3 == 'b') {
			bab++;
		} else if (c1 == 'b' && c2 == 'b' && c3 == 'a') {
			bba++;
		} else if (c1 == 'b' && c2 == 'b' && c3 == 'b') {
			bbb++;
		}
		found =
			aaa > 1 || aab > 1 || aba > 1 || abb > 1 || baa > 1 || bab > 1 || bba > 1 || bbb > 1;
		if (!found) {
			pos++;
			c1 = c2;
			c2 = c3;
		}
	}
	cout << c1 << c2 << c3 << " " << pos << endl;
}