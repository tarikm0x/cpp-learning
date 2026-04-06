#include<iostream>
#include<string>

using namespace std;

struct Student {
	string ime;
	string prezime;
	int ocjena;


};

int main() {

	Student s1 = { "Tarik","Random",9 };
	Student* p1 = &s1;

	cout << p1->ime << " " << p1->prezime << " " << p1->ocjena << endl;



	return 0;
}