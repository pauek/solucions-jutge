#include <iostream>
using namespace std;

int main() {
	int primer, n, quants = 0;
	cin >> primer;
	cout << "nombres que acaben igual que " << primer << ":" << endl;
	while (cin >> n) {
		if (n % 1000 == primer % 1000) {
			cout << n << endl;
			quants++;
		}
	}
	cout << "total: " << quants << endl;
}
