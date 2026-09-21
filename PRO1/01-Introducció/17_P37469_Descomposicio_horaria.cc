#include <iostream>
using namespace std;

int main() {
	int segons;
	cin >> segons;

	int hores = segons / 3600;
	segons = segons % 3600;

	int minuts = segons / 60;
	segons = segons % 60;

	cout << hores << ' ' << minuts << ' ' << segons << endl;
}
