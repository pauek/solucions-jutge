
#include <iomanip>
#include <iostream>
using namespace std;

struct Rellotge {
	int h, m, s;
};

Rellotge mitja_nit() {
	return Rellotge{0, 0, 0};
}

void incrementa(Rellotge& r) {
	r.s++;
	if (r.s == 60) {
		r.s = 0;
		r.m++;
		if (r.m == 60) {
			r.m = 0;
			r.h++;
			if (r.h == 24) {
				r.h = 0;
			}
		}
	}
}

void escriu(const Rellotge& r) {
	cout << setw(2) << setfill('0') << r.h << ":";
	cout << setw(2) << setfill('0') << r.m << ":";
	cout << setw(2) << setfill('0') << r.s << endl;
}

int main() {
	Rellotge r = Rellotge{23, 59, 59};
	incrementa(r);
	escriu(r);
	cout << endl;
}
