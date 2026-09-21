// Repeticions de bases
// https://jutge.org/problems/X57448_ca
// X57448_ca:std:none:P1++
// Created on 03/11/2025, 17:02:01 by Pau Fernández

#include <iostream>
using namespace std;

struct Base {
	int length = 0;
	int pos = -1;
};

void updateBase(Base& X, const Base& curr) {
	if (curr.length > X.length) {
		X = curr;
	}
}

void printBase(char base, const Base& B) {
	cout << '"' << base << "\" = " << B.length;
	if (B.pos >= 0) {
		cout << '(' << B.pos << ')';
	}
}

int main() {
	char base;
	while (cin >> base) {
		Base A, C, G, T, curr;
		int pos = 1;
		char repeated = '\0', last = '\0';

		bool finished = false;
		while (!finished) {
			if (base == last) {
				curr.length++;
			} else {
				switch (repeated) {
					case 'A':
						updateBase(A, curr);
						break;
					case 'C':
						updateBase(C, curr);
						break;
					case 'G':
						updateBase(G, curr);
						break;
					case 'T':
						updateBase(T, curr);
						break;
				}
				curr = {1, pos};
				last = base;
				repeated = base;
			}
			if (base == '.') {
				finished = true;
			} else {
				cin >> base;
				pos++;
			}
		}

        printBase('A', A);
		cout << ", ";
        printBase('C', C);
        cout << ", ";
        printBase('G', G);
        cout << ", ";
        printBase('T', T);
		cout << endl;
	}
}