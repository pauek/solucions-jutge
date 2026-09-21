#include <cassert>
#include <string>
#include <vector>
using namespace std;

typedef vector<int> Vector;
typedef vector<Vector> Matriu;

/*
 * PRE:  M.size() > 0 and M[0].size() > 0, és una matriu d'enters.
 *		 M[0][0] >= 0.
 *		 potencia > 0, objectiu > 0.
 *		 recorregut.size() > 0 i recorregut només conté 'N','S','E','O'.
 *
 * POST: Retorna ACONSEGUIT si el recorregut és capaç de recollir
 * 		 almenys tants premis com objectiu.
 *		 Retorna ESGOTAT si recull tantes pedres o més que potència.
 * 		 Retorna NO HI ARRIBEM si el recorregut no aconsegueix recollir
 * 		 		 tants premis com objectiu.
 */

// #define DEBUG

string matriu_laberint(const Matriu& M, int k, int objectiu, const string& recorregut) {
	int n_fil = M.size();
	int n_col = M[0].size();

	char d;
	bool trobat = false;

	int i = 0;
	int j = 0;

	int acum = M[i][j]; /* la posició 0,0 no serà mai una pedra */

#ifdef DEBUG
	cout << "INICI. b=" << k << " objectiu=" << objectiu << endl;
#endif

	int x = 0;
	while (x < recorregut.size() and not trobat) {
		char d = recorregut[x++];
		int inc_i = 0, inc_j = 0;

		if (d == 'N') {
			inc_i = -1;
		}
		if (d == 'S') {
			inc_i = 1;
		}
		if (d == 'E') {
			inc_j = -1;
		}
		if (d == 'O') {
			inc_j = 1;
		}

		i += inc_i;
		j += inc_j;

		bool repetim = i == n_fil or i == -1 or j == n_col or j == -1;

		if (i == n_fil) {
			i--;
		}
		if (i == -1) {
			i++;
		}
		if (j == n_col) {
			j--;
		}
		if (j == -1) {
			j++;
		}

		if (not repetim) {
			if (M[i][j] < 0) {
				k += M[i][j]; /* és una pedra */
			}
			if (M[i][j] >= 0) {
				acum += M[i][j];
			}
		}

		trobat = acum >= objectiu or k < 0;
	}

	if (acum >= objectiu) {
		return "ACONSEGUIT";
	}
	if (k < 0) {
		return "ESGOTAT";
	}

	return "NO HI ARRIBEM";
}