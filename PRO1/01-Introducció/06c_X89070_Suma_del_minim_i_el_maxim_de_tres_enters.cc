#include <iostream>
using namespace std;

int min(int a, int b) {
	return a <= b ? a : b;
}

int max(int a, int b) {
	return a >= b ? a : b;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int m = min(a, min(b, c));
	int M = max(a, max(b, c));

	cout << m + M << endl;
}
