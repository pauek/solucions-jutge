#include <iostream>
using namespace std;

int main() {
	char c;
	cin >> c;
	cout << char(islower(c) ? toupper(c) : tolower(c)) << endl;
}
