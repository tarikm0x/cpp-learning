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
	return 0;

}