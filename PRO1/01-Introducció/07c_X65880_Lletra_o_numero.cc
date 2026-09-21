#include <iostream>
using namespace std;

int main() {
	char c;
	cin >> c;
	if (isdigit(c)) {
		cout << "Numero" << endl;
	} else if (isupper(c)) {
		cout << "Lletra majuscula" << endl;
	} else if (islower(c)) {
		cout << "Lletra minuscula" << endl;
	}
}
