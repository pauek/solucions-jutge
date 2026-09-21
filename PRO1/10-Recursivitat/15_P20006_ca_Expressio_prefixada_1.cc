// Expressió prefixada (1)
// https://jutge.org/problems/P20006_ca
// P20006_ca:std:none:G++17
// Created on 07/11/2025, 18:00:13 by Pau Fernández

#include <iostream>
#include <cassert>
using namespace std;

int avalua() {
    char c;
    cin >> c;
    if (isdigit(c)) {
        return c - '0';
    } 
    int esq = avalua();
    int dre = avalua();
    if (c == '+') {
        return esq + dre;   
    } else if (c == '-') {
        return esq - dre;   
    } else {
        assert(c == '*');
        return esq * dre;
    }
}

int main() {
    cout << avalua() << endl;
}
