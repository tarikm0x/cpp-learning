#include<iostream>
#include<string>

using namespace std;

struct Student {
	string ime;
	string prezime;
	int ocjena;


};

int main() {

	Student s1;
	s1.ime = "Tarik";
	s1.prezime = "random";
	s1.ocjena = 9;

	Student s2 = { "Elmir","snow",8 };

	Student s3;
	cout << "Unesi ime studenta: ";
	cin >> s3.ime;
	cout << "Unesi prezime studenta: ";
	cin >> s3.prezime;
	cout << "Unesi ocjenu: ";
	cin >> s3.ocjena;

	cout << s1.ime << " " << s1.prezime << " " << s1.ocjena << endl;
	cout << s2.ime << " " << s2.prezime << " " << s2.ocjena << endl;
	cout << s3.ime << " " << s3.prezime << " " << s3.ocjena << endl;


	return 0;
}