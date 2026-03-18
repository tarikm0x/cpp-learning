#include <iostream>
using namespace std;


int main() {
	int broj = 10;
	int* pokazivac = &broj;
	cout << "Ispis broja: " << broj << endl;
	cout << "Ispis adrese broja: " << &broj << endl;
	cout << "Ispis pokazivaca: " << pokazivac << endl;
	cout << "Ispis *pokazivaca/dereferenciranje: " << *pokazivac << endl;


	return 0;

}