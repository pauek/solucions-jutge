// Assignació (3)
// https://jutge.org/problems/X30229_ca
// X30229_ca:std:none:
// Created on 20/10/2025, 08:58:26 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int assig_senars, assig_parelles, euros;
	cin >> assig_senars >> assig_parelles >> euros;

	int despeses, s = 1;
	while (cin >> despeses) {
		euros += (s % 2 == 1 ? assig_senars : assig_parelles);
		euros -= despeses;
		cout << euros << endl;
		s++;
	}
}
