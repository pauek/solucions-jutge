
#include <iostream>
#include <vector>
using namespace std;

struct Alumne {
	int dni;
	string nom;
};

struct Nota {
	int dni;
	string ass;	 // assignatura
	string fac;	 // facultat
	double nota;
};

vector<Alumne> llegeix_alumnes() {
	int sz;
	cin >> sz;
	vector<Alumne> alumnes(sz);
	for (Alumne& a : alumnes) {
		cin >> a.dni >> a.nom;
	}
	return alumnes;
}

vector<Nota> llegeix_notes() {
	int sz;
	cin >> sz;
	vector<Nota> notes(sz);
	for (Nota& n : notes) {
		cin >> n.dni >> n.ass >> n.fac >> n.nota;
	}
	return notes;
}

int main() {
	cout.setf(ios::fixed);	// estableix el format dels reals
	cout.precision(2);		// per escriure les notes

	vector<Alumne> alumnes = llegeix_alumnes();
	vector<Nota> notes = llegeix_notes();

	double suma = 0.0;
	int ialum = 0, inota = 0, total_notes = 0;

	while (ialum < alumnes.size() && inota < notes.size()) {
		const Alumne& A = alumnes[ialum];
		const Nota& N = notes[inota];

		if (A.dni == N.dni) {
			if (total_notes == 0) {
				cout << A.dni << ' ' << A.nom << endl;
			}
			cout << "     " << N.ass << ' ' << N.fac << ' ' << N.nota << endl;
			suma += N.nota;
			total_notes++;
			inota++;
		} else {
			if (total_notes > 0) {
				cout << "     mitjana: " << suma / double(total_notes) << endl << endl;
				suma = 0, total_notes = 0;
			}
			if (A.dni > N.dni) {
				++inota;
			} else {
				++ialum;
			}
		}
	}
	if (total_notes > 0) {
		cout << "     mitjana: " << suma / double(total_notes) << endl << endl;
	}
}
