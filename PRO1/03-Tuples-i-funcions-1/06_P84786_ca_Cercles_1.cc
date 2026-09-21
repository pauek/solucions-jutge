// Cercles (1)
// https://jutge.org/problems/P84786_ca
// P84786_ca:std:structs:
// Created on 20/10/2025, 18:23:40 by Pau Fernández

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

void desplaca(Punt& p1, const Punt& p2) {
	p1.x += p2.x;
	p1.y += p2.y;
}

struct Cercle {
	Punt centre;
	double radi;
};

void escala(Cercle& c, double esc) {
	c.radi *= esc;
}

void desplaca(Cercle& c, const Punt& p) {
	desplaca(c.centre, p);
}

bool es_interior(const Punt& p, const Cercle& c) {
	const double dcentre = distancia(p, c.centre);
	return dcentre <= c.radi;
}
