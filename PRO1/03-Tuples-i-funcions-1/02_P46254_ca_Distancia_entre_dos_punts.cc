// Distància entre dos punts
// https://jutge.org/problems/P46254_ca
// P46254_ca:std:structs:
// Created on 20/10/2025, 17:54:41 by Pau Fernández

#include <cmath>
#include <iostream>
using namespace std;

struct Punt {
	double x, y;
};

double distancia(const Punt& a, const Punt& b) {
	const double dx = a.x - b.x;
	const double dy = a.y - b.y;
	return sqrt(dx * dx + dy * dy);
}

int main() {
	cout << distancia({0, 0}, {2, 1}) << endl;
}
