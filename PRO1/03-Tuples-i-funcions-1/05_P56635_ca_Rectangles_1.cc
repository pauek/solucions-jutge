// Rectangles (1)
// https://jutge.org/problems/P56635_ca
// P56635_ca:std:none:
// Created on 20/10/2025, 18:23:00 by Pau Fernández

#include <iostream>
using namespace std;

struct Rectangle {
	int x_esq, x_dre, y_baix, y_dalt;
};

void llegeix(Rectangle& r) {
	cin >> r.x_esq >> r.x_dre >> r.y_baix >> r.y_dalt;
}

int relacio_1D(int a1, int a2, int b1, int b2) {
	if (a2 < b1 || b2 < a1) {
		return 0;
	} else if (a1 == b1 && a2 == b2) {
		return 4;
	} else if (a1 >= b1 && a2 <= b2) {
		return 1;
	} else if (b1 >= a1 && b2 <= a2) {
		return 2;
	} else {
		return 3;
	}
}

int relacio(const Rectangle& r1, const Rectangle& r2) {
	const int rel_x = relacio_1D(r1.x_esq, r1.x_dre, r2.x_esq, r2.x_dre);
	const int rel_y = relacio_1D(r1.y_baix, r1.y_dalt, r2.y_baix, r2.y_dalt);
	if (rel_x == 0 || rel_y == 0) {
		return 0;
	} else if (rel_x == 4 && rel_y == 4) {
		return 4;
	} else if ((rel_x == 2 && rel_y == 4) || (rel_x == 4 && rel_y == 2) ||
			   (rel_x == 2 && rel_y == 2)) {
		return 2;
	} else if ((rel_x == 1 && rel_y == 4) || (rel_x == 4 && rel_y == 1) ||
			   (rel_x == 1 && rel_y == 1)) {
		return 1;
	} else {
		return 3;
	}
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		Rectangle ra, rb;
		llegeix(ra);
		llegeix(rb);
		int rel = relacio(ra, rb);
		if (rel == 0) {
			cout << "els rectangles no intersecten" << endl;
		} else if (rel == 1) {
			cout << "el primer rectangle es interior al segon" << endl;
		} else if (rel == 2) {
			cout << "el segon rectangle es interior al primer" << endl;
		} else if (rel == 4) {
			cout << "els rectangles son iguals" << endl;
		} else {
			cout << "els rectangles intersecten" << endl;
		}
	}
}
