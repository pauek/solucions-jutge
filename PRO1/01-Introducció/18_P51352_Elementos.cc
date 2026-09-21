#include <iostream>
using namespace std;

int main() {
	char a, b;
	cin >> a >> b;

	if (a == b) {
		cout << "-" << endl;
	} else if ((a == 'A' && b == 'P') || (a == 'P' && b == 'V') || (a == 'V' && b == 'A')) {
		cout << '1' << endl;
	} else {
		cout << '2' << endl;
	}
}
