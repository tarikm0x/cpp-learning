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
	int min = niz[0];
	int max = niz[0];

	for (int i = 0; i < broj; i++) {
		if (niz[i] < min) {
			min = niz[i];
		}
	}
	for (int i = 0; i < broj; i++) {
		if (niz[i] > max) {
			max = niz[i];
		}

	}
	cout << "Najmanji broj u nizu je: " << min << endl;
	cout << "Najveci broj u nizu je: " << max << endl;


	return 0;

}