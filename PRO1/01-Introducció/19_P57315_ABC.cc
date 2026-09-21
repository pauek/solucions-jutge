#include <iostream>
using namespace std;

void print(char who, int a, int b, int c) {
	if (who == 'A') {
		cout << a;
	} else if (who == 'B') {
		cout << b;
	} else {
		cout << c;
	}
}

void ordena(int& A, int& B, int& C) {
	if (A > B) {
		swap(A, B);
	}
	if (A > C) {
		swap(A, C);
	}
	if (B > C) {
		swap(B, C);
	}
}

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	ordena(A, B, C);

	char c1, c2, c3;
	cin >> c1 >> c2 >> c3;

	print(c1, A, B, C);
	cout << ' ';
	print(c2, A, B, C);
	cout << ' ';
	print(c3, A, B, C);
	cout << endl;
}
