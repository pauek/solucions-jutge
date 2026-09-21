#include <iostream>
using namespace std;

struct Rellotge {
	int h, m, s;
};

Rellotge mitja_nit() {
	return Rellotge{0, 0, 0};
}

void incrementa(Rellotge& R) {
	R.s++;
	if (R.s == 60) {
		R.s = 0;
		R.m++;
		if (R.m == 60) {
			R.m = 0;
			R.h++;
			if (R.h == 24) {
				R.h = 0;
			}
		}
	}
}

inline void pr_NN(int n) {
	cout << (n < 10 ? "0" : "") << n;
}

void escriu(const Rellotge& r) {
	pr_NN(r.h);
	cout << ":";
	pr_NN(r.m);
	cout << ":";
	pr_NN(r.s);
	cout << endl;
}

int main() {
	Rellotge r = Rellotge{23, 59, 59};
	incrementa(r);
	escriu(r);
}