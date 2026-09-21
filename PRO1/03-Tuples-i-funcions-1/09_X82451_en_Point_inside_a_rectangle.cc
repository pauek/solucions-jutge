// Point inside a rectangle
// https://jutge.org/problems/X82451_en
// X82451_en:std:none:
// Created on 20/10/2025, 18:23:51 by Pau Fernández

#include <iostream>
#include <string>

using namespace std;

struct Point {
	int x, y;
};

Point read_point() {
	Point p;
	cin >> p.x >> p.y;
	return p;
}

struct Rectangle {
	int xmin, ymin, xmax, ymax;
};

Rectangle read_rectangle() {
	Rectangle r;
	cin >> r.xmin >> r.ymin >> r.xmax >> r.ymax;
	return r;
}

string containtment(Point p, Rectangle r) {
	if (p.x < r.xmin || p.x > r.xmax || p.y < r.ymin || p.y > r.ymax) {
		return "outside";
	} else if (p.x > r.xmin && p.x < r.xmax && p.y > r.ymin && p.y < r.ymax) {
		return "inside";
	} else {
		return "border";
	}
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y, x1, y1, x2, y2;
		cin >> x >> y >> x1 >> y1 >> x2 >> y2;
		cout << containtment({x, y}, {x1, y1, x2, y2}) << endl;
	}
}