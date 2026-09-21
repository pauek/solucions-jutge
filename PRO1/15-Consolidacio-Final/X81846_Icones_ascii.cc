// C++ wrapper used for programs that have a main function

// Icones ASCII
// https://jutge.org/problems/X81846_ca
// X81846_ca:std:none:P1++
// Created on 03/11/2025, 18:38:51 by Pau Fernández

#include <iostream>
using namespace std;

int main() {
	int n, black, white;
	cin >> n;
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < 20; i++) {
			cin >> black >> white;
			string row;
			for (int j = 0; j < 20; j++) {
				bool bitb = black % 2;
				bool bitw = white % 2;
				black /= 2;
				white /= 2;
				char pixel = (bitb ? '#' : bitw ? '.' : ' ');
				if (row != "" || pixel != ' ') {
					row = pixel + row;
				}
			}
			cout << row << endl;
		}
		cout << endl;
	}
}

// START STUB **************************

// Wrapper for C++ compiler that uses some tweaks to
// speed up the program execution and catches several
// exceptions and give an accurate verdict.

#include <signal.h>
#include <cstdlib>
#include <exception>
#include <iostream>

// the following code will be executed if main throws an exception
[[noreturn]] void jutge__stub__on_terminate() noexcept {
	if (auto exc = std::current_exception()) {
		// we have an exception
		try {
			std::rethrow_exception(exc);  // throw to recognize the type
		} catch (std::bad_alloc& exc) {
			raise(SIGUSR1);
		} catch (std::exception& exc) {
			raise(SIGUSR2);
		} catch (...) {
			raise(SIGUSR2);
		}
	}
	std::_Exit(0);
}

// the following function should be executed before main
int jutge__stub__initialization() {
	// handle exception from main
	std::set_terminate(&jutge__stub__on_terminate);

	// speedup io
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);

	// return something
	return 999;
}

// the following global variable gets initialized before main
int jutge__stub__initialization_global_variable = jutge__stub__initialization();

// END STUB ****************************
