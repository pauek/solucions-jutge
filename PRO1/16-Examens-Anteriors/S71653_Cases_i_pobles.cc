#include <string>
#include <vector>
using namespace std;

#ifndef TIPUS
#define TIPUS

struct Casa {
	string nom;
	int pos;
};

struct Poble {
	int inici, fi;
	int num_cases;
};

#endif

void sort_by_position(vector<Casa>& cases) {
	for (int i = 1; i < int(cases.size()); i++) {
		Casa actual = cases[i];
		int j = i;
		while (j > 0 && cases[j - 1].pos > actual.pos) {
			cases[j] = cases[j - 1];
			j--;
		}
		cases[j] = actual;
	}
}

vector<Poble> detecta_pobles(vector<Casa>& cases) {
	sort_by_position(cases);

	vector<Poble> pobles;
	if (cases.empty()) {
		return pobles;
	}

	Poble actual = {cases[0].pos, cases[0].pos, 1};
	for (int i = 1; i < cases.size(); i++) {
		int dist = cases[i].pos - cases[i - 1].pos;
		if (dist < 3) {
			actual.fi = cases[i].pos;
			actual.num_cases++;
		} else {
			if (actual.num_cases >= 2) {
				pobles.push_back(actual);
			}
			actual = {cases[i].pos, cases[i].pos, 1};
		}
	}
	if (actual.num_cases >= 2) {
		pobles.push_back(actual);
	}
	return pobles;
}