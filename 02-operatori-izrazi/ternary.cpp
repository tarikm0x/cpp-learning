#include <iostream>
using namespace std;

int main() {
	int broj;
	cout << "Unesi broj: ";
	cin >> broj;
	cout << "Bez provjere nule: ";
	broj > 0 ? cout << "broj je pozitivan! " : cout << "broj je negativan";
	cout << endl << endl;
	cout << "Sa provjerom nule: ";
	(broj > 0) ? cout << "Broj je pozitivan! " : (broj < 0) ? cout << "Broj je negativan! " : cout << "broj je nula";

	cout << endl;

	string r = broj > 0 ? "pozitivan"
		: "negativan";
	cout << r;
	return 0;
}