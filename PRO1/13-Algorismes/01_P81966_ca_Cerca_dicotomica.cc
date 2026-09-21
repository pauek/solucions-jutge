// Cerca dicotòmica
// https://jutge.org/problems/P81966_ca
// P81966_ca:std:no_main:G++17
// Created on 05/12/2025, 09:52:51 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre) {
	if (v.empty() || esq > dre) {
		return -1;
	}
	int mig = (esq + dre) / 2;
	if (v[mig] < x) {
		return posicio(x, v, mig + 1, dre);
	}
	if (v[mig] > x) {
		return posicio(x, v, esq, mig - 1);
	}
	return mig;
}

int main() {
	int n;
	while (cin >> n) {
		vector<double> V(n);
		for (int i = 0; i < n; ++i) {
			cin >> V[i];
		}
		int t;
		cin >> t;
		while (t--) {
			double x;
			int esq, dre;
			cin >> x >> esq >> dre;
			cout << posicio(x, V, esq, dre) << endl;
		}
	}
	return 0;
}
