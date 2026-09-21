
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<double> intersection(const vector<double>& v1, const vector<double>& v2) {
	vector<double> result;
	vector<double>::const_iterator i = v1.begin(), j = v2.begin();
	while (i != v1.end() && j != v2.end()) {
		if (*i == *j) {
			if (result.empty() || result.back() != *i) {
				result.push_back(*i);
			}
			i++, j++;
		} else if (*i > *j) {
			j++;
		} else {
			i++;
		}
	}
	return result;
}

void read(vector<double>& v) {
	string line;
	getline(cin, line);
	stringstream sin(line);
	double x;
	while (sin >> x) {
		v.push_back(x);
	}
}

int main() {
	vector<double> v1, v2;
	read(v1);
	read(v2);
	vector<double> r = intersection(v1, v2);
	for (int i = 0; i < r.size(); i++) {
		cout << r[i] << ' ';
	}
	cout << endl;
}
