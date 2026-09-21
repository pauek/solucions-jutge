#include <string>

std::string parenthesize(std::string s, int n) {
	if (n == 0) {
		return s;
	}
	const bool even = n % 2 == 0;
	const char open = even ? '[' : '(';
	const char close = even ? ']' : ')';
	return open + parenthesize(s, n - 1) + close;
}
