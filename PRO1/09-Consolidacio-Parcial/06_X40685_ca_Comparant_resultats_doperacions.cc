// Comparant resultats d'operacions
// https://jutge.org/problems/X40685_ca
// X40685_ca:std:none:G++17
// Created on 03/11/2025, 18:23:21 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3;
	string op, comp;
	while (cin >> num1 >> op >> num2 >> comp >> num3) {
		int num;
		if (op == "+") {
			num = num1 + num2;
		} else if (op == "-") {
			num = num1 - num2;
		} else {
			num = num1 * num2;
		}
		bool res;
		if (comp == "<") {
			res = num < num3;
		} else if (comp == ">") {
			res = num > num3;
		} else if (comp == "<=") {
			res = num <= num3;
		} else if (comp == ">=") {
			res = num >= num3;
		} else if (comp == "==") {
			res = num == num3;
		} else {
			res = num != num3;
		}
        cout << (res ? "true" : "false") << endl;
	}
}