// Nombres harmònics (2)
// https://jutge.org/problems/P58153_ca
// P58153_ca:std:none:G++17
// Created on 21/10/2025, 20:02:47 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(10);

	int n, m;
	while (cin >> n >> m) {
		double Hn_Hm = 0.0;
		for (int i = m + 1; i <= n; i++) {
			Hn_Hm += 1.0 / double(i);
		}
		cout << Hn_Hm << endl;
	}
}
