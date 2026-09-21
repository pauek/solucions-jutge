// Quantes frases hi ha despres d'una pregunta i amb més a's que b's
// https://jutge.org/problems/X49928_ca
// X49928_ca:std:none:G++17
// Created on 03/11/2025, 17:33:22 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int result = 0, num_as = 0, num_bs = 0;
	bool counting = false;
	
    char c;
	while (cin >> c) {
		if (c == 'a') {
			if (counting) {
				num_as++;
			}
		} else if (c == 'b') {
			if (counting) {
				num_bs++;
			}
		} else {
			if (counting and num_as > num_bs) {
				result++;
			}
			counting = c == '?';
			num_as = 0;
			num_bs = 0;
		}
	}
	cout << result << endl;
}