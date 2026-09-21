#include <iostream>
#include <vector>
using namespace std;

// Pre: entra un vector d'strings desordenat
// Post: surt un vector d'strings ordenat
void selection_sort(vector<string>& v) {
	int n = v.size();
	for (int i = 0; i < n - 1; ++i) {
		int p_min = i;
		for (int j = i + 1; j < n; ++j) {
			if (v[j] < v[p_min]) {
				p_min = j;
			}
		}
		swap(v[i], v[p_min]);
	}
}

// Pre: entra un vector d'strings
// Post: imprimeix els elements sense repetir.
void quitar_repetidos(vector<string>& v) {
	cout << v[0] << endl;
	int n = v.size();
	for (int i = 1; i < n; ++i) {
		if (v[i - 1] != v[i]) {
			cout << v[i] << endl;
		}
	}
}

int main() {
	vector<string> paraules;
	string word;
	while (cin >> word) {
		paraules.push_back(word);
	}
	selection_sort(paraules);
	quitar_repetidos(paraules);
}