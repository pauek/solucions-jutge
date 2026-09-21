#include <iostream>
using namespace std;

int main() {
	int any;
	cin >> any;

	if (any % 4 == 0 && any % 100 != 0 || any % 400 == 0) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
