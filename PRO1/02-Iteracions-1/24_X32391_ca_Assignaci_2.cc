// Assignació (2)
// https://jutge.org/problems/X32391_ca
// X32391_ca:std:none:
// Created on 20/10/2025, 08:53:38 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int euros, setmanes, despeses;
	cin >> despeses >> euros >> setmanes;

	int saldo_positiu = 0;
	for (int s = 1; s <= setmanes; s++) {
		int assignacio;
		cin >> assignacio;
		euros += assignacio - despeses;
		if (euros > 0) {
			saldo_positiu++;
		}
	}

	cout << saldo_positiu << endl;
}
