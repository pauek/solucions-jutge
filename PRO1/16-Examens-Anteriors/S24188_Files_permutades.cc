#include <cassert>
#include <iostream>
#include <vector>
using namespace std;

/*
 * @pre  M és quadrada i M.size() > 0
 *       1 <= M[i][j] <= 1000
 *       Els valors d'una mateixa fila són tots diferents.
 *
 * @post Retorna `true` si i només si la matriu satisfà les
 *       següents condicions:
 *       - Totes les files són diferents.
 *       - Totes les files són permutacions entre elles.
 */
bool te_files_permutades(const vector<vector<int>>& M) {
	return false;
}

vector<vector<int>> llegeix_matriu(int n) {
	vector<vector<int>> M(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> M[i][j];
		}
	}
	return M;
}

int main() {
	int n;
	while (cin >> n) {
		vector<vector<int>> M = llegeix_matriu(n);
		cout << (te_files_permutades(M) ? "yes" : "no") << endl;
	}
	return 0;
}
