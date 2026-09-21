// Sumar i restar un segon
// https://jutge.org/problems/P56358_ca
// P56358_ca:std:none:
// Created on 20/10/2025, 18:23:45 by Pau Fernández

#include <iostream>
using namespace std;

struct Temps {
	int hora, minut, segon;
};

Temps restar(Temps t) {
	t.segon--;
	if (t.segon < 0) {
		t.segon = 59;
		t.minut--;
		if (t.minut < 0) {
			t.minut = 59;
			t.hora--;
			if (t.hora < 0) {
				t.hora = 23;
			}
		}
	}
	return t;
}

Temps sumar(Temps t) {
	t.segon++;
	if (t.segon >= 60) {
		t.segon = 0;
		t.minut++;
		if (t.minut >= 60) {
			t.minut = 0;
			t.hora++;
			if (t.hora >= 24) {
				t.hora = 0;
			}
		}
	}
	return t;
}

void un_segon(const Temps& t, Temps& t1, Temps& t2) {
	t1 = sumar(t);
	t2 = restar(t);
}

int main() {
	Temps t;
	while (cin >> t.hora >> t.minut >> t.segon) {
		Temps p1, m1;
		un_segon(t, p1, m1);
		cout << p1.hora << ' ' << p1.minut << ' ' << p1.segon << endl;
		cout << m1.hora << ' ' << m1.minut << ' ' << m1.segon << endl;
	}
}
