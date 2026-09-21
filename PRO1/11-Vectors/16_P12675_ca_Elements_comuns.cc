// Elements comuns
// https://jutge.org/problems/P12675_ca
// P12675_ca:std:no_main:G++17
// Created on 22/11/2025, 17:46:06 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

vector<int> llegir_vector(int n) {
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	return v;
}

int elements_comuns(const vector<int>& X, const vector<int>& Y) {
    int i = 0, j = 0, ncomuns = 0;
    while (i < X.size() && j < Y.size()) {
        if (X[i] == Y[j]) {
            ncomuns++;
            i++, j++;
        } else if (Y[j] < X[i]) {
            j++;
        } else if (X[i] < Y[j]) {
            i++;
        }
    }
    return ncomuns;
}

int main() {
	int n, m;
	while (cin >> m >> n) {
		vector<int> X = llegir_vector(m);
		vector<int> Y = llegir_vector(n);
		cout << elements_comuns(X, Y) << endl;
	}
	return 0;
}
