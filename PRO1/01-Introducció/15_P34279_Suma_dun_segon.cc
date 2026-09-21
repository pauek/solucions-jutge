#include <iostream>
using namespace std;

void print2(int x) {
	if (x < 10) {
		cout << 0;
	}
	cout << x;
}

int main() {
	int h, m, s;
	cin >> h >> m >> s;

	s++;
	if (s == 60) {
		s = 0;
		m++;
		if (m == 60) {
			m = 0;
			h++;
			if (h == 24) {
				h = 0;
			}
		}
	}

	print2(h);
	cout << ":";
	print2(m);
	cout << ":";
	print2(s);
	cout << endl;
}
