#include <iostream>
using namespace std;

// Considerem un interval amb a > b com a buit
struct Interval {
	int a, b;
};

Interval interseccio(Interval i1, Interval i2) {
	if (i2.b < i1.a || i2.a > i1.b) {  // I + VI
		return {1, 0};
	} else if (i2.a <= i1.a && i2.b <= i1.b) {	// II
		return {i1.a, i2.b};
	} else if (i2.a <= i1.a && i2.b >= i1.b) {	// III
		return {i1.a, i1.b};
	} else if (i2.a >= i1.a && i2.b <= i1.b) {	// IV
		return {i2.a, i2.b};
	} else if (i2.a >= i1.a && i2.b >= i1.b) {	// V
		return {i2.a, i1.b};
	}
}

char un_dins_laltre(Interval i1, Interval i2) {
	if (i1.a == i2.a && i1.b == i2.b) {
		return '=';
	} else if (i2.a <= i1.a && i1.b <= i2.b) {
		return '1';
	} else if (i1.a <= i2.a && i2.b <= i1.b) {
		return '2';
	} else {
		return '?';
	}
}

int main() {
	Interval i1, i2;
	cin >> i1.a >> i1.b >> i2.a >> i2.b;

	cout << un_dins_laltre(i1, i2) << " , [";

	Interval i3 = interseccio(i1, i2);
	if (i3.a <= i3.b) {	 // no buida
		cout << i3.a << "," << i3.b;
	}

	cout << "]" << endl;
}
