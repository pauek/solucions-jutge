// F002A. Infixos
// https://jutge.org/problems/P29428_ca
// P29428_ca:std:none:G++17
// Created on 22/11/2025, 17:39:26 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

bool conte_a_posicio(string A, string s, int pos) {
    for (int i = 0; i < int(s.size()); i++) {
        if (A[pos + i] != s[i]) {
            return false;
        }
    }
    return true;
}

bool conte(string A, string s) {
    for (int i = 0; i < int(A.size() - s.size() + 1); i++) {
        if (conte_a_posicio(A, s, i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<string> paraules(n);
    for (int i = 0; i < n; i++) {
        cin >> paraules[i];
    }

    for (int i = 0; i < int(paraules.size()); i++) {
        cout << paraules[i] << ":";
        for (int j = 0; j < int(paraules.size()); j++) {
            if (conte(paraules[i], paraules[j])) {
                cout << " " << paraules[j];
            }
        }
        cout << endl;
    }
}
