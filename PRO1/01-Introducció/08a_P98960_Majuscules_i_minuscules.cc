#include <iostream>
using namespace std;

int main() {
	char c;
	cin >> c;

	if (c >= 'a' && c <= 'z') {
		const int index = int(c) - int('a');
		cout << char(int('A') + index) << endl;
	} else {
		const int index = int(c) - int('A');
		cout << char(int('a') + index) << endl;
	}
}
