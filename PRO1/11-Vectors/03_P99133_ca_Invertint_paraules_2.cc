// Invertint paraules (2)
// https://jutge.org/problems/P99133_ca
// P99133_ca:std:none:G++17
// Created on 22/11/2025, 16:14:25 by Pau Fernández

#include <iostream>
#include <vector>
using namespace std;

string reverse(string w) {
    const int size = w.size();
    string wrev(w.size(), ' ');
    for (int i = 0; i < size; i++) {
        wrev[i] = w[size - 1 - i];
    }
    return wrev;
}

int main() {
    int n;
    cin >> n;

    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    for (int i = n-1; i >= 0; i--) {
        cout << reverse(words[i]) << endl;
    }
}
