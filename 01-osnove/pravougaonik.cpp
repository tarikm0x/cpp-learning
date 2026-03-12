#include <iostream>
using namespace std;

int main() {

	cout << "Unesi duzinu pravougaonika: " << endl;
	int duzina;
	cin >> duzina;
	cout << "Unesi sirinu pravougaonika: " << endl;
	int sirina;
	cin >> sirina;
	cout << "Obim pravougaonika je: " << 2 * duzina + 2 * sirina << endl;
	cout << "Povrsina pravougaonika je: " << duzina * sirina << endl;


	return 0;
}