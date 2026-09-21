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

Fraccio suma(Fraccio a, Fraccio b) {
	return fraccio(a.num * b.den + b.num * a.den, a.den * b.den);
}

Fraccio resta(Fraccio a, Fraccio b) {
	return fraccio(a.num * b.den - b.num * a.den, a.den * b.den);
}

Fraccio multiplica(Fraccio a, Fraccio b) {
	return fraccio(a.num * b.num, a.den * b.den);
}

Fraccio divideix(Fraccio a, Fraccio b) {
	return fraccio(a.num * b.den, a.den * b.num);
}

void mostra_fraccio(Fraccio a) {
	cout << a.num;
	if (a.den > 1) {
		cout << '/' << a.den;
	}
	cout << endl;
}

int main() {
	int n, d;
	cin >> n >> d;
	Fraccio acum = fraccio(n, d);
	mostra_fraccio(acum);

	string op;
	while (cin >> op >> n >> d) {
		Fraccio r = fraccio(n, d);
		if (op == "suma") {
			acum = suma(acum, r);
		} else if (op == "resta") {
			acum = resta(acum, r);
		} else if (op == "multiplica") {
			acum = multiplica(acum, r);
		} else if (op == "divideix") {
			acum = divideix(acum, r);
		}
		mostra_fraccio(acum);
	}
}