#include <iostream>
using namespace std;

int main() {
	cout << "Koliko brojeva: ";
	int broj;
	int suma = 0;
	int broj_brojeva;
	cin >> broj_brojeva;
	for (int i = 1; i <= broj_brojeva; i++) {
		cout << "Unesi broj: ";
		cin >> broj;

		suma += broj;

	}
	cout << "Suma ovih brojeva je: " << suma << endl;
	cout << "Prosjek ovih brojeva je: " << suma / broj_brojeva;
	return 0;
}