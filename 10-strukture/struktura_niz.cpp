#include<iostream>
#include<string>

using namespace std;

struct Student {
	string ime;
	string prezime;
	int ocjena;


};

int main() {

	Student studenti[3];

	studenti[0] = { "Tarik","Random",9 };

	studenti[1].ime = "John";
	studenti[1].prezime = "Doe";
	studenti[1].ocjena = 6;

	cout << "Unesi ime studenta: ";
	cin >> studenti[2].ime;
	cout << "Unesi prezime studenta: ";
	cin >> studenti[2].prezime;
	cout << "Unesi ocjenu: ";
	cin >> studenti[2].ocjena;

	cout << studenti[0].ime << " " << studenti[0].prezime << " " << studenti[0].ocjena << endl;
	cout << studenti[1].ime << " " << studenti[1].prezime << " " << studenti[1].ocjena << endl;
	cout << studenti[2].ime << " " << studenti[2].prezime << " " << studenti[2].ocjena << endl;
	return 0;
}

