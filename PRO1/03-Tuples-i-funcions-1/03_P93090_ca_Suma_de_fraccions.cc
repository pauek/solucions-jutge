#include <iostream>
using namespace std;

struct Fraccio {
	int num, den;
};

int mcd(int a, int b) {
	while (b != 0) {
		int aux = b;
		b = a % b;
		a = aux;
	}
	return a;
}

int signe(int n) {
	return n < 0 ? -1 : 1;
}

Fraccio fraccio(int n, int d) {
	if (n == 0) {
		return {0, 1};
	}
	int sig = signe(n) * signe(d);
	n = abs(n);
	d = abs(d);
	const int m = mcd(n, d);
	return {sig * n / m, d / m};
}

Fraccio suma(const Fraccio& a, const Fraccio& b) {
	int num = a.num * b.den + b.num * a.den;
	int den = a.den * b.den;
	return fraccio(num, den);
}

void mostra_fraccio(Fraccio a) {
	cout << a.num << '/' << a.den << endl;
}

int main() {
	int num, den;
	string op;
	char barra;
	cin >> num >> barra >> den;
	Fraccio f = fraccio(num, den);
	while (cin >> op && op != "=") {
		cin >> num >> barra >> den;
		f = suma(f, fraccio(num, den));
	}
	mostra_fraccio(f);
}