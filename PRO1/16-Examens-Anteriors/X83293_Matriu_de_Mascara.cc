
#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;
typedef vector<vector<bool>> Mask;

Matrix apply_mask(const Matrix& M, const Mask& K) {
	Matrix result = M;
	for (int i = 0; i < result.size(); i++) {
		for (int j = 0; j < result[i].size(); j++) {
			if (!K[i][j]) {
				result[i][j] = 0;
			}
		}
	}
	return result;
}
