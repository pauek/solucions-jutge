// Exchange rates
// https://jutge.org/problems/X36722_en
// X36722_en:std:none:
// Created on 20/10/2025, 09:02:31 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);

	double exchange_rate;
	cin >> exchange_rate;

	double amount, total_euros = 0.0;
	string currency;
	while (cin >> amount >> currency) {
		if (currency == "EUR") {
			total_euros += amount;
		} else {
			total_euros += amount / exchange_rate;
		}
	}
	cout << total_euros << ' ' << total_euros * exchange_rate << endl;
}
