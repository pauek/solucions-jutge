#include <iostream>
using namespace std;

/*

Si considerem que (a1, b1) està inmòvil i
(a2, b2) és el que pot estar en qualsevol posició
relativa, tenim:

Cas             a1----------b1

				|           |
I       a2---b2 |           |
				|           |
II      a2------+----b2     |
				|           |
III     a2------+-----------+------b2
				|           |
IV              | a2-----b2 |
				|           |
V               |     a2----+------b2
				|           |
VI              |           | a2---b2


Totes les interseccions (cas II a V) poden ser només
en els extrems.

[Dibuixat amb asciiflow.com]
*/

int main() {
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;

	cout << "[";
	if (b2 < a1 || a2 > b1) {  // I + VI
		// buida!
	} else if (a2 <= a1 && b2 <= b1) {	// II
		cout << a1 << "," << b2;
	} else if (a2 <= a1 && b2 >= b1) {	// III
		cout << a1 << "," << b1;
	} else if (a2 >= a1 && b2 <= b1) {	// IV
		cout << a2 << "," << b2;
	} else if (a2 >= a1 && b2 >= b1) {	// V
		cout << a2 << "," << b1;
	}
	cout << "]" << endl;
}
