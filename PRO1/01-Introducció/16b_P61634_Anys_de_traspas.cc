#include <iostream>
using namespace std;

bool de_traspas(int any) {
	return any % 4 == 0 && any % 100 != 0 || any % 400 == 0;
}

int main() {
	int any;
	cin >> any;
	cout << (de_traspas(any) ? "YES" : "NO") << endl;
}
