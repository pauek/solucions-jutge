#include <vector>
using namespace std;

int suma_diagonal1(const vector<vector<int>>& Q) {
	int n = Q.size(), suma = 0;
	for (int i = 0; i < n; i++) {
		suma += Q[i][i];
	}
	return suma;
}

int suma_diagonal2(const vector<vector<int>>& Q) {
	int n = Q.size(), suma = 0;
	for (int i = 0; i < n; i++) {
		suma += Q[n - i - 1][i];
	}
	return suma;
}

int suma_columna(const vector<vector<int>>& Q, int c) {
	int suma = 0;
	for (int f = 0; f < Q.size(); ++f) {
		suma += Q[f][c];
	}
	return suma;
}

int suma_fila(const vector<vector<int>>& Q, int f) {
	int suma = 0;
	for (int c = 0; c < Q.size(); ++c) {
		suma += Q[f][c];
	}
	return suma;
}

bool tots_un_cop(const vector<vector<int>>& Q) {
    const int n = Q.size();
	vector<int> H(n * n + 1, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x = Q[i][j];
			if (x <= 0 or x > n * n) {
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
	int suma = suma_diagonal1(Q);
	if (suma_diagonal2(Q) != suma) {
		return false;
	}
	for (int i = 0; i < Q.size(); i++) {
		if (suma_fila(Q, i) != suma) {
			return false;
		}
		if (suma_columna(Q, i) != suma) {
			return false;
		}
	}

	return tots_un_cop(Q);
}