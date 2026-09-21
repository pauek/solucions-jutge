#include <vector>

void ordena_per_insercio(std::vector<double>& v) {
	for (int i = 1; i < v.size(); i++) {
		int j = i - 1;
		while (j >= 0 && v[j] > v[j + 1]) {
			std::swap(v[j], v[j + 1]);
			j--;
		}
	}
}
