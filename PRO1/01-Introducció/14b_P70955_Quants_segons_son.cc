#include <iostream>
using namespace std;

int main() {
	int anys, dies, hores, minuts, segons;
	cin >> anys >> dies >> hores >> minuts >> segons;

	cout << (((((anys * 365) + dies) * 24 + hores) * 60 + minuts) * 60 + segons) << endl;
}
