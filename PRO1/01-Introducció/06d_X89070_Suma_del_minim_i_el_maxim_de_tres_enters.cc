#include <iostream>
using namespace std;

// min i max ja existeixen a C++ (i <iostream> els inclou indirectament)

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << min(a, min(b, c)) + max(a, max(b, c)) << endl;
}
