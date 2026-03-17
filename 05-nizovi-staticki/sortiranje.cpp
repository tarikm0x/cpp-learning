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
	int temp;
	for (int j = 0; j < broj; j++) {
		for (int i = 0; i < broj - 1; i++) {
			if (niz[i] < niz[i + 1]) {
				temp = niz[i];
				niz[i] = niz[i + 1];
				niz[i + 1] = temp;
			}
		}


	}

	cout << "Sortirani od najveceg do najmanjeg: ";
	for (int i = 0; i < broj; i++) {
		cout << niz[i] << " ";
	}
	cout << endl;
	for (int j = 0; j < broj; j++) {
		for (int i = 0; i < broj - 1; i++) {
			if (niz[i] > niz[i + 1]) {
				temp = niz[i];
				niz[i] = niz[i + 1];
				niz[i + 1] = temp;
			}
		}


	}

	cout << "Sortirani od najmanjeg do najveceg: ";
	for (int i = 0; i < broj; i++) {
		cout << niz[i] << " ";
	}
	return 0;

}