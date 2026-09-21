#include <vector>
using std::vector;

#ifndef BOCI
#define BOCI

struct boci {
	int valor;
	int inici;
	int final;
};
#endif

bool menor(const boci& a, const boci& b) {
	int a_sz = a.final - a.inici, b_sz = b.final - b.inici;
	if (a_sz != b_sz) {
		return a_sz < b_sz;
	} else if (a.valor != b.valor) {
		return a.valor < b.valor;
	} else {
		return a.inici < b.inici;
	}
}

void ordena(vector<boci>& bocins) {
	for (int i = 1; i < bocins.size(); i++) {
		boci actual = bocins[i];
		int j = i;
		while (j > 0 && menor(actual, bocins[j - 1])) {
			bocins[j] = bocins[j - 1];
			j--;
		}
		bocins[j] = actual;
	}
}

vector<boci> bocins(const vector<int>& v) {
	vector<boci> bocins;

	boci actual = {v[0], 0, 0};
	for (int i = 1; i < v.size(); i++) {
		if (v[i] == actual.valor) {
			actual.final = i;
		} else {
			bocins.push_back(actual);
			actual = {v[i], i, i};
		}
	}
	bocins.push_back(actual);

	ordena(bocins);

	return bocins;
}
