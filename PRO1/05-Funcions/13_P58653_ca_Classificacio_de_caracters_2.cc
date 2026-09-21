// Classificació de caràcters (2)
// https://jutge.org/problems/P58653_ca
// P58653_ca:std:none:G++17
// Created on 27/10/2025, 17:57:19 by Pau Fernández

#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) {
	cout << s << "('" << c << "') = ";
	cout << (b ? "cert" : "fals") << endl;
}

bool minuscula(char c) {
	return c >= 'a' && c <= 'z';
}

bool majuscula(char c) {
	return c >= 'A' && c <= 'Z';
}

bool lletra(char c) {
	return minuscula(c) || majuscula(c);
}

char a_maj(char c) {
	return (minuscula(c) ? c - 32 : c);
}

bool vocal(char c) {
	const char C = a_maj(c);
	return C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U';
}

bool digit(char c) {
	return c >= '0' && c <= '9';
}

int main() {
	char c;
	cin >> c;

	escriu_linia(c, "lletra", lletra(c));
	escriu_linia(c, "vocal", vocal(c));
	escriu_linia(c, "consonant", lletra(c) && !vocal(c));
	escriu_linia(c, "majuscula", majuscula(c));
	escriu_linia(c, "minuscula", minuscula(c));
	escriu_linia(c, "digit", digit(c));
}
