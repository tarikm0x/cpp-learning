#include<iostream>
#include<string>
using namespace std;

int main() {

	cout << "Unesi ime i prezime" << endl;
	string imePrezime;
	getline(cin, imePrezime);

	cout << "Zdravo, " << imePrezime << " !";



	return 0;
}