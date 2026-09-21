#include <algorithm>
#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

struct Participant {
	string name;
	int points;
};

int posicio_de_tall(const vector<Participant>& participants) {
	assert(!participants.empty());
	double cutoff = double(participants[0].points) / 2.0;

	int begin = 0, end = participants.size() - 1;
	while (end >= begin) {
		int mid = (end + begin) / 2;
		if (double(participants[mid].points) >= cutoff) {
			begin = mid + 1;
		} else {
			end = mid - 1;
		}
	}
	return begin;  // stopped at the lower value, below cutoff (reverse order!)
}
