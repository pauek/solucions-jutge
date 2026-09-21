#include <iostream>
#include <vector>
using namespace std;

vector<double> fusio(const vector<double>& a, const vector<double>& b) {
	vector<double> result(a.size() + b.size());
	int i = 0, j = 0, k = 0;
	while (k < result.size()) {
		if (i >= a.size()) {
			result[k++] = b[j++];
		} else if (j >= b.size()) {
			result[k++] = a[i++];
		} else if (a[i] <= b[j]) {
			result[k++] = a[i++];
		} else {
			result[k++] = b[j++];
		}
	}
	return result;
}

int main() {
	vector<double> a = {1, 2, 3, 4, 4, 4};
	vector<double> b = {3, 3, 3, 6, 7, 8, 9, 10, 11};
	auto c = fusio(a, b);
	for (double x : c) {
		cout << x << ' ';
	}
	cout << endl;
}