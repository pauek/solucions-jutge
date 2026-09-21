// Sembles més jove
// https://jutge.org/problems/X13786_ca
// X13786_ca:std:none:G++17
// Created on 03/11/2025, 17:40:14 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
    string _, name;
    int age;

    while (cin >> _ >> _ >> _ >> name >> _ >> _ >> _ >> age >> _ >> _) {
        cout << name << ", you look younger. I thought you were " << age - age/10 << " years old." << endl;
    }
}
