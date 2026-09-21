// Distància a l'origen
// https://jutge.org/problems/X04437_ca
// X04437_ca:std:no_main:G++17
// Created on 27/10/2025, 17:55:57 by Pau Fernández

#include <cmath>
#include <iostream>
using namespace std;

double dist_or(double x, double y) {
	return sqrt(x * x + y * y);
}

int main() {
	double x, y;
	while (cin >> x >> y) {
		cout << dist_or(x, y) << endl;
	}
}
