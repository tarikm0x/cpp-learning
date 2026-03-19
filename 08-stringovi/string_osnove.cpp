#include<iostream>
#include<string>
using namespace std;

int main() {

	cout << "Unesi svoje ime: ";
	string ime;
	cin >> ime;
	cout << "Tvoje ime je: " << ime << endl;
	cout << "Duzina tvog imena je: " << ime.length() << endl;
	cout << "Prvo slovo tvoga imena je: " << ime[0] << endl;
	cout << "Zadnje slovo tvoga imena je: " << ime[ime.length() - 1] << endl;


	return 0;
}