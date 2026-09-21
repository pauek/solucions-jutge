#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

bool llegeix_matriu(Matriu& M) {
	int p, q;
	if (cin >> p >> q) {
		M = Matriu(p, vector<int>(q, 0));
		for (vector<int>& fila : M) {
			for (int& cell : fila) {
				cin >> cell;
			}
		}
		return true;
	}
	return false;
}

struct Pos {
	int i = -1, j = -1;
};

bool next(Pos& pos, const Matriu& M) {
	const int P = M.size(), Q = M[0].size();
	if (pos.i == -1) {
		pos = {0, 0};
	} else if (pos.j % 2 == 0) {  // abajo
		pos.i++;
		if (pos.i == P) {
			pos.i = P - 1;
			pos.j++;
		}
	} else {  // arriba
		pos.i--;
		if (pos.i < 0) {
			pos.i = 0;
			pos.j++;
		}
	}
	return pos.j < Q;
}

bool creixent(Matriu M) {
	Pos p;
	int curr, last = -1;
	while (next(p, M)) {
		curr = M[p.i][p.j];
		if (last != -1 && curr <= last) {
			return false;
		}
		last = curr;
	}
	return true;
}

int main() {
	int i = 1;
	Matriu M;
	while (llegeix_matriu(M)) {
		cout << "matriu " << i << ": " << (creixent(M) ? "si" : "no") << endl;
		i++;
	}
}
