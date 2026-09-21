
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	// guardem els num de telefon a un vector
	vector<int> num_telf(n);

	for (int i = 0; i < n; ++i) {
		cin >> num_telf[i];
	}
	// creem un vector de 24 valors booleans que representaran les hores de
	// trucada de cada num de telefon
	vector<vector<bool> > Trucades_h(n, vector<bool>(24, false));

	int telf;
	while (cin >> telf) {
		// busquem els numeros de telefon per busqueda binaria perque estan ordenats
		bool trobat = false;
		int esq = 0, dret = n - 1;
		int pos = (esq + dret) / 2;
		while (not trobat and esq <= dret) {
			pos = (esq + dret) / 2;
			if (num_telf[pos] == telf) {
				trobat = true;
			} else if (num_telf[pos] < telf) {
				esq = pos + 1;
			} else if (num_telf[pos] > telf) {
				dret = pos - 1;
			}
		}

		// calculem nomes la 'hora' del moment que han trucat
		string hora;
		cin >> hora;
		int h = (hora[0] - '0') * 10 + (hora[1] - '0');
		if (not Trucades_h[pos][h]) {  // per quan no estigui guardat
			Trucades_h[pos][h] = true;
		}
	}

	bool empty = true;
	for (int i = 0; i < n; ++i) {
		bool hores_total = Trucades_h[i][0];
		int h = 0;
		// Nomes s'imprimeixen les que totes les seves hores es 'true'
		while (hores_total and h < 24) {
			hores_total = hores_total and Trucades_h[i][h];
			++h;
		}
		if (hores_total) {
			cout << num_telf[i] << endl;
			empty = false;
		}
	}

	if (empty) {
		cout << "Empty" << endl;
	}
}