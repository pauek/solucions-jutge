#include <string>
#include <vector>

using namespace std;

#ifndef PERSONA
#define PERSONA

struct Persona {
	string nom;
	int edat;
};
#endif

/**
 * @brief Troba l'índex de la primera persona (amb el mínim índex)
 *        d'edat exactament 'anys'.
 *
 * @param persones Vector de persones ordenat per edat possiblement amb
 *                 persones amb la mateixa edat.
 *
 * @param anys Edat a buscar
 *
 * @returns L'índex de la primera persona amb exactament 'anys' anys,
 *          o -1 si no n'hi ha cap.
 *
 * @pre   El vector de persones està ordenat per edat.
 */
int cerca_per_edat(const vector<Persona>& persones, int anys) {
	int N = persones.size();
	int low = 0, high = N - 1;
	int resultat = -1;

	while (low <= high) {
		int mid = low + (high - low) / 2;

		if (persones[mid].edat < anys) {
			low = mid + 1;
		} else {
			if (persones[mid].edat == anys) {
				resultat = mid;
			}
			high = mid - 1;
		}
	}

	return resultat;
}
