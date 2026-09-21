// Rampes
// https://jutge.org/problems/X09467_ca
// X09467_ca:std:none:G++17
// Created on 22/11/2025, 17:31:10 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

vector<bool> pos_rampas(const vector<int>& v) {
	vector<bool> ramp(v.size());
	for (int i = 0; i < int(v.size() - 2); i++) {
		const bool ascendent = (v[i] < v[i + 1] && v[i + 1] < v[i + 2]);
		const bool descendent = (v[i] > v[i + 1] && v[i + 1] > v[i + 2]);
		ramp[i] = ascendent || descendent;
	}
	return ramp;
}

int pot_conflictives(const vector<bool>& B) {
	int resultat = 0;
	for (int i = 0; i < int(B.size()); i++) {
		if (B[i]) {
			resultat += int(B[i + 1]);
			resultat += int(B[i + 2]);
		}
	}
	return resultat;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> seq(n);
		for (int i = 0; i < n; i++) {
			cin >> seq[i];
		}

		const vector<bool> rampes = pos_rampas(seq);

		cout << "posicions amb rampa:";
		for (int i = 0; i < int(rampes.size() - 2); i++) {
			if (rampes[i]) {
				cout << ' ' << i;
			}
		}
		cout << endl;

		const int conflictives = pot_conflictives(rampes);
		cout << "potencialment conflictives: " << conflictives << endl;
		cout << "---" << endl;
	}
}
