// Tobogans
// https://jutge.org/problems/X44801_ca
// X44801_ca:std:none:P1++
// Created on 03/11/2025, 19:19:06 by Pau Fernández

#include <iostream>
using namespace std;

struct Tobogan {
	int index, size, slope;
};

Tobogan max_tobogan(const Tobogan& a, const Tobogan& b) {
    return (b.size > a.size ? b : a);
}

int main() {
	int index = 0;
	int n, un;			// n y último n
	int dif, udif = 0;	// diferencia y última diferencia

	bool going_up = false;
	Tobogan current = {-1, 0, 0}, asc = {-1, 0, 0}, desc = {-1, 0, 0};

	cin >> un;
	index++;
	while (cin >> n) {
		index++;
		dif = n - un;
		if (dif != 0 && dif == udif) {
			if (current.index == -1) {
				current = {index - 2, 3, dif};	// empieza uno
				going_up = dif > 0;
			} else {
				current.size++;	 // continua
			}
		} else if (current.index != -1) {  // tobogán actual ha acabado
			if (going_up) {
                asc = max_tobogan(asc, current);
			} else {
                desc = max_tobogan(desc, current);
			}
			current.index = -1;
		}
		un = n;
		udif = dif;
	}
	if (current.index != -1) {
		if (going_up) {
            asc = max_tobogan(asc, current);
		} else {
            desc = max_tobogan(desc, current);
		}
	}

	if (asc.index != -1) {
		cout << "/ " << asc.index << ":" << asc.slope << ":" << asc.size << endl;
	}
	if (desc.index != -1) {
		cout << "\\ " << desc.index << ":" << desc.slope << ":" << desc.size << endl;
	}
}