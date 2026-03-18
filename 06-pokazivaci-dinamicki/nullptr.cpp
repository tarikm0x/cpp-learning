#include <iostream>
using namespace std;


int main() {

	//int* p;  opasno ne moze se koristiti, neinicijaliziran  
	//cout << "Neinicijaliziran: " << &p << endl; ne radi undefined behaviour ili error

	int* p = nullptr;
	cout << "Nakon nullptr: " << p << endl;
	cout << "adresa pokazivaca : " << &p << endl;

	if (p == nullptr) {
		cout << "Pokazivac je null - siguran!" << endl;
	}

	int broj = 5;
	p = &broj;
	cout << "Nakon dodjeljivanja: " << p << endl;
	cout << "adresa pokazivaca : " << &p << endl;//adresa je uvijek ista
	cout << "Vrijednost: " << *p << endl;
	return 0;

}