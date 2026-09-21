// Diumenges de Pasqua
// https://jutge.org/problems/P35547_ca
// P35547_ca:std:none:
// Created on 20/10/2025, 08:07:59 by Pau Fernández

#include <iostream>
using namespace std;

struct Data {
	int dia, mes, any;
};

Data diumenge_de_pasqua(int any) {
	int k = any / 100;
	int x = any % 19;
	int b = any % 4;
	int c = any % 7;
	int q = k / 4;
	int p = (13 + 8 * k) / 25;
	int y = (15 - p + k - q) % 30;
	int z = (19 * x + y) % 30;
	int n = (4 + k - q) % 7;
	int e = (2 * b + 4 * c + 6 * z + n) % 7;

	if (z + e <= 9) {
		return {22 + z + e, 3, any};
	} else if (z == 29 && e == 6) {
		return {19, 4, any};
	} else if (z == 28 && e == 6 && x > 10) {
		return {18, 4, any};
	} else {
		return {z + e - 9, 4, any};
	}
}

int main() {
	int any;
	while (cin >> any) {
		Data d = diumenge_de_pasqua(any);
		cout << d.dia << '/' << d.mes << endl;
	}
}
