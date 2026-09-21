// Càlcul d'arrels i de quadrats
// https://jutge.org/problems/P38045_ca
// P38045_ca:std:none:G++17
// Created on 27/10/2025, 17:54:03 by Pau Fernández

#include <cmath>
#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);

	int n;
	while (cin >> n) {
		cout << n * n << " " << sqrt(n) << endl;
	}
}
