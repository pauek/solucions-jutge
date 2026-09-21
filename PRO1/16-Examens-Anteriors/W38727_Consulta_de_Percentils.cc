#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Player {
	string name;
	int points;
	double percentile;
};

vector<Player> read_players() {
	vector<Player> result;
	Player p;
	while (cin >> p.name && p.name != "---") {
		cin >> p.points;
		result.push_back(p);
	}
	return result;
}

bool by_name(const Player& a, const Player& b) {
	return a.name < b.name;
}

bool by_points(const Player& a, const Player& b) {
	return a.points < b.points;
}

int search_by_name(const vector<Player>& P, const string& name) {
	int low = 0, high = int(P.size()) - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (P[mid].name == name) {
			return mid;
		} else if (P[mid].name > name) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return -1;
}

int main() {
	cout.precision(2);
	cout.setf(ios::fixed);

	vector<Player> players = read_players();

	// Sort by points and fill in the percentile
	sort(players.begin(), players.end(), by_points);
	int n = players.size();
	for (int i = 0; i < n; i++) {
		auto& p = players[i];
		p.percentile = 100.0 * (i + 1) / n;
	}

	// Sort by name to optimize for the queries
	sort(players.begin(), players.end(), by_name);

	string name;
	while (cin >> name) {
		int pos = search_by_name(players, name);
		cout << players[pos].percentile << endl;
	}
}