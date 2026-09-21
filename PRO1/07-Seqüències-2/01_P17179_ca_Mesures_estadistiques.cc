// Mesures estadístiques
// https://jutge.org/problems/P17179_ca
// P17179_ca:std:none:G++17
// Created on 27/10/2025, 19:45:07 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i) {
		int n;
		cin >> n;

		double x;
		cin >> x;

		double suma = x;
		double mx = x;
		double mn = x;

		for (int j = 1; j < n; ++j) {
			cin >> x;
			suma += x;
			mx = max(mx, x);
			mn = min(mn, x);
		}

		cout << mn << " " << mx << " " << suma / double(n) << endl;
	}
}
