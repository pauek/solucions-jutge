
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

/*
 * A i B són dues matrius de les mateixes dimensions.
 * A i B són matrius d'enters i els valors que hi ha
 * a totes dues matrius és entre 0 i 99 (tots dos inclosos).
 * Torna true si i només si la matriu B és una
 * permutació de la matriu A.
 *
 */

bool permutacio(const Matriu& A, const Matriu& B) {
	vector<int> TMP(100, 0);

	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < A[i].size(); j++) {
			TMP[A[i][j]]++;
		}
	}

	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < A[i].size(); j++) {
			TMP[B[i][j]]--;
			if (TMP[B[i][j]] < 0) {
				return false;
			}
		}
	}

	for (int i = 0; i < TMP.size(); i++) {
		if (TMP[i] != 0) {
			return false;
		}
	}

	return true;
}
