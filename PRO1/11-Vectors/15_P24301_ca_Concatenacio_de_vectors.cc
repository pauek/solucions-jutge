// Concatenació de vectors
// https://jutge.org/problems/P24301_ca
// P24301_ca:std:no_main:G++17
// Created on 22/11/2025, 17:44:18 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& V1, const vector<int>& V2) {
	vector<int> resultat(V1.size() + V2.size());  // reservem d'entrada tot l'estpai!
	for (int i = 0; i < V1.size(); i++) {
		resultat[i] = V1[i];
	}
	for (int i = 0; i < V2.size(); i++) {
		resultat[V1.size() + i] = V2[i];
	}
	return resultat;
}

int main() {
	int n1;
	while (cin >> n1) {
		vector<int> V1(n1);
		for (int i = 0; i < n1; ++i) {
			cin >> V1[i];
		}
		int n2;
		cin >> n2;
		vector<int> V2(n2);
		for (int i = 0; i < n2; ++i) {
			cin >> V2[i];
		}
		vector<int> res = concatenacio(V1, V2);
		cout << res.size() << endl;
		for (int i = 0; i < (int)res.size(); ++i) {
			cout << " " << res[i];
		}
		cout << endl;
	}
	return 0;
}
