#include <iostream>
using namespace std;


int main() {
	int niz[100];
	int broj;

	cout << "Unesi koliko brojeva zelis u niz: ";
	cin >> broj;
	for (int i = 0; i < broj; i++) {
		cout << "Unesi " << i + 1 << " broj u niz: ";
		cin >> niz[i];



	}
	for (int i = 0; i < broj; i++) {
		cout << niz[i] << " ";




	}
	int sum = 0;
	for (int i = 0; i < broj; i++) {
		sum += niz[i];


	}
	cout << endl;
	cout << "Suma svih clanova niza je: " << sum << endl;
	cout << "Prosjek niza je: " << double(sum / broj);

	return 0;

}