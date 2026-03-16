#include <iostream>
using namespace std;


int main() {
	int niz[100];
	cout << "Koliko clanova niza zelis: ";
	int broj;
	cin >> broj;

	for (int i = 0; i < broj; i++) {
		cout << "Unesi " << i + 1 << " clan niza: ";
		cin >> niz[i];
	}
	for (int i = 0; i < broj; i++) {
		cout << niz[i] << " ";
	}
	cout << endl;
	int obrnutNiz[100];

	for (int i = 0; i < broj; i++) {
		obrnutNiz[i] = niz[broj - 1 - i];


	}

	for (int i = 0; i < broj; i++) {
		cout << obrnutNiz[i] << " ";
	}
	return 0;

}