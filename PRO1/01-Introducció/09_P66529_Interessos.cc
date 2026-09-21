#include <iostream>
using namespace std;

int iteracions_periode(string periode) {
	if (periode == "setmanal") {
		return 52;
	} else if (periode == "mensual") {
		return 12;
	} else if (periode == "trimestral") {
		return 4;
	} else {
		return 2;
	}
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);

	double interes;
	string periode;
	cin >> interes >> periode;

	double c = 1.0;
	int num_iteracions = iteracions_periode(periode);

	double interes_periode = interes / (100.0 * double(num_iteracions));
	for (int i = 0; i < num_iteracions; i++) {
		c += c * interes_periode;
	}

	double TAE = 100.0 * (c - 1.0);
	cout << TAE << endl;
}
