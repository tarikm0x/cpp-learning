#include<iostream>

using namespace std;

struct Student {
	string ime;
	string prezime;
	int ocjena;


};


void ispisiStudenta(struct Student random) {// moze i bez struct

	cout << random.ime << " " << random.prezime << " " << random.ocjena << endl;


}



int main() {


	Student s1 = { "Tarik","Random",9 };
	ispisiStudenta(s1);

	return 0;
}

