#include <iostream>
using namespace std;

int main() {
	char c;
	cin >> c;

	const int dif = int('a') - int('A');
	if (c >= 'a' && c <= 'z') {
		cout << char(int(c) - dif) << endl;
	} else {
		cout << char(int(c) + dif) << endl;
	}
}
