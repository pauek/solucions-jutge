#include <iostream>
#include <vector>
using namespace std;

struct Provincia {
	string nom, capital;
	int habitants, area;
	double pib;
};

struct Pais {
	string nom, capital;
	vector<Provincia> provs;
};

typedef vector<Pais> Paisos;

double pib(const Paisos& paisos, char lletra, double densitat) {
	double pib_total = 0.0;
	for (int i = 0; i < paisos.size(); i++) {
		const Pais& pais = paisos[i];
		if (pais.nom[0] == lletra) {
			for (int j = 0; j < pais.provs.size(); j++) {
				const Provincia& prov = pais.provs[j];
				const double d = double(prov.habitants) / double(prov.area);
				if (d > densitat) {
					pib_total += prov.pib;
				}
			}
		}
	}
	return pib_total;
}

int main() {}