// Ordenació per inserció
// https://jutge.org/problems/P41412_ca
// P41412_ca:std:no_main:G++17
// Created on 05/12/2025, 10:05:51 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

void ordena_per_insercio(vector<double>& v) {
	for (int i = 1; i < v.size(); i++) {
        double x = v[i];
		int j = i;
		while (j > 0 && v[j - 1] > x) {
            v[j] = v[j - 1];
			j--;
		}
        v[j] = x;
	}
}

int main() {
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(4);
	int n;
	while (cin >> n) {
		vector<double> V(n);
		for (int i = 0; i < n; ++i) {
			cin >> V[i];
		}
		ordena_per_insercio(V);
		for (int i = 0; i < n; ++i) {
			cout << " " << V[i];
		}
		cout << endl;
	}
	return 0;
}
