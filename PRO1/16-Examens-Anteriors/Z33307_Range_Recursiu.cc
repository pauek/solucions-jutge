#include <iostream>
using namespace std;

/* Imprimeix per pantalla tots els enters des de end fins a start
   (ambdós inclosos), de major a menor, separats per un sol espai.
   Precondició: start > 0, end > 0, start <= end. */

void range(int start, int end) {
	if (end == start) {
		cout << end;
	} else {
		cout << end << " ";
		range(start, end - 1);
	}
}
