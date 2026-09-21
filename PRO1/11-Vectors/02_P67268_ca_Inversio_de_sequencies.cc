// Inversió de seqüències
// https://jutge.org/problems/P67268_ca
// P67268_ca:std:none:G++17
// Created on 22/11/2025, 16:11:34 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		vector<int> seq(n);
		for (int i = 0; i < n; i++) {
			cin >> seq[i];
		}
        if (n > 0) {
            cout << seq[n - 1];
            for (int i = n - 2; i >= 0; i--) {
                cout << ' ' << seq[i];
            }
        }
		cout << endl;
	}
}
