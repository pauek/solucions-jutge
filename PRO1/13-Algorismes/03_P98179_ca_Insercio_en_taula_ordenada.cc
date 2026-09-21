// Inserció en taula ordenada
// https://jutge.org/problems/P98179_ca
// P98179_ca:std:no_main:G++17
// Created on 05/12/2025, 10:02:26 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

void insereix(vector<double>& v) {
	int i = v.size() - 1;
	while (i > 0 && v[i] < v[i - 1]) {
		swap(v[i], v[i - 1]);
		i--;
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
		insereix(V);
		for (int i = 0; i < n; ++i) {
			cout << " " << V[i];
		}
		cout << endl;
	}
	return 0;
}
