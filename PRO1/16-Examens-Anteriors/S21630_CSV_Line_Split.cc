#include <cassert>
#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Funció que, donada una línia sencera d'un CSV, separa
 * la línia en les seves cel·les. La funció té en compte que
 * les cel·les poden tenir com a delimitadors les cometes dobles
 * i que això permet fer servir el separador dins les cometes.
 *
 * @returns Un vector amb els `string`s de cada cel·la de la línia.
 */
vector<string> csv_line_split(string line, char sep) {
	vector<string> result;
	string cell;
	bool in_string = false;
	for (int i = 0; i < line.size(); i++) {
		if (line[i] == '"') {
			in_string = !in_string;
		} else if (line[i] == sep && !in_string) {
			result.push_back(cell);
			cell.clear();
		} else {
			cell += line[i];
		}
	}
	result.push_back(cell);
	return result;
}
