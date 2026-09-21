#include <iostream>
using namespace std;

int main() {
	char c;
	cin >> c;
	if ('0' <= c && c <= '9') {
		cout << "Numero" << endl;
	} else if ('A' <= c && c <= 'Z') {
		cout << "Lletra majuscula" << endl;
	} else {
		cout << "Lletra minuscula" << endl;
	}
}
