// Donats tres nombres, comprova si algun d'ells és igual al promig dels altres dos
// https://jutge.org/problems/X81984_ca
// X81984_ca:std:none:G++17
// Created on 03/11/2025, 17:35:40 by Pau Fernández

#include <iostream>
using namespace std;

bool es_promig(int x, int a1, int a2) {
	return double(x) == double(a1 + a2) / 2.0;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	bool promig = es_promig(a, b, c) || es_promig(b, a, c) || es_promig(c, a, b);
	cout << (promig ? "YES" : "NO") << endl;
}
