#include <iomanip>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/*
 * PRE:  v és un vector R. |v| >= 3
 * POST: torna la posició de y_1 a v.
 */
int vectorR(const vector<int>& v) {
	int low = 0, high = v.size() - 1;
	while (low < high) {
		int mid = (low + high) / 2;
		if (v[mid - 1] > v[mid]) {
			return mid;
		} else if (v[mid] < v[0]) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}

	return low;
}
