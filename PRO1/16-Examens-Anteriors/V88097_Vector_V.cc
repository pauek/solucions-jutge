
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

/**
 * PRE:  v és un vector V i ∣v∣ ≥ 3.
 * POST: La posició en què es troba y1 a v.
 */
int picV(const vector<int>& v) {
	int low = 0, high = v.size() - 1;

	while (low < high) {
		int mid = (low + high) / 2;
		if (v[mid - 1] > v[mid] && v[mid] < v[mid + 1]) {
			return mid;
		} else if (v[mid] > v[mid + 1]) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	return low;
}
