
#include <cassert>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/*-------------------------------------------------------------------
 * PRE:  v és un vector V, pos és la posició de y_1 a v,
 * 		 |r| = |v|.
 * POST: r conté els valors del vector v ordenats creixentment.
 */
void ordena(const vector<int>& v, int pos, vector<int>& r) {
	int i = pos - 1, j = pos;

	r.clear();
	while (i >= 0 && j < v.size()) {
		if (v[i] < v[j]) {
			r.push_back(v[i]);
			i--;
		} else {
			r.push_back(v[j]);
			j++;
		}
	}
	while (i >= 0) {
		r.push_back(v[i]);
		i--;
	}
	while (j < v.size()) {
		r.push_back(v[j]);
		j++;
	}
}
