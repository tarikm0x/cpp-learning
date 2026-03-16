#include <iostream>
using namespace std;


int main() {
	int niz[100];

	int broj;
	cout << "Koliko zelis da uneses brojeva u niz: ";
	cin >> broj;
	for (int i = 0; i < broj; i++) {
		cout << "Unesi " << i + 1 << " clan niza: ";
		cin >> niz[i];
	}
	for (int i = 0; i < broj; i++) {
		cout << niz[i] << " ";
	}
	cout << endl;
	int trazim;
	cout << "Koji broj trazis: ";
	cin >> trazim;
	int pozicija = 0;
	for (int i = 0; i < broj; i++) {
		if (niz[i] == trazim) {
			pozicija = i + 1;
			break;
		}
	}
	if (pozicija == 0) {
		cout << "Broj nije pronadjen!";
	}
	else {
		cout << "Broj je na poziciji: " << pozicija;
	}

	return 0;

}