#include <vector>
using namespace std;

int suma_qualsevol(const vector<vector<int>>& Q, int i, int j, int di, int dj) {
    const int N = Q.size();
	int suma = 0;
    while (0 <= i && i < N && 0 <= j && j < N) {
        suma += Q[i][j];
        i += di, j += dj;
    }
    return suma;
}

bool tots_un_cop(const vector<vector<int>>& Q) {
    const int N = Q.size();
	vector<int> H(N * N + 1, 0);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int x = Q[i][j];
			if (x <= 0 or x > N * N) {
				return false;
			}
			H[x]++;
			if (H[x] == 2) {
				return false;
			}
		}
	}
    return true;
}

bool quadrat_magic(const vector<vector<int>>& Q) {
    const int N = Q.size();
	int suma = suma_qualsevol(Q, 0, 0, 1, 1);
	if (suma_qualsevol(Q, 0, N-1, 1, -1) != suma) {
		return false;
	}
	for (int k = 0; k < N; k++) {
		if (suma_qualsevol(Q, k, 0, 0, 1) != suma) {
			return false;
		}
		if (suma_qualsevol(Q, 0, k, 1, 0) != suma) {
			return false;
		}
	}

	return tots_un_cop(Q);
}