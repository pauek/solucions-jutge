#include <iostream>
using namespace std;

struct Racional {
	int num, den;
};

int mcd(int a, int b) {
	while (b != 0) {
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

int signe(int x) {
	return x < 0 ? -1 : 1;
}

Racional racional(int n, int d) {
	if (n == 0) {
		return {0, 1};
	}
	const int sig = signe(n) * signe(d);
	n = abs(n);
	d = abs(d);
	const int m = mcd(n, d);
	return {sig * n / m, d / m};
}