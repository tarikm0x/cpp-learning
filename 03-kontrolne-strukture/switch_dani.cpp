#include <iostream>
using namespace std;

int main() {
	cout << "Upisi broj od 1-7 i dobices koji je dan u sedmici: ";
	int broj;
	cin >> broj;
	switch (broj) {
	case 1: 	cout << "Ponedjeljak"; break;
	case 2:  cout << "Utorak"; break;
	case 3:  cout << "Srijeda"; break;
	case 4:  cout << "Cetvrtak"; break;
	case 5:  cout << "Petak"; break;
	case 6:  cout << "Subota"; break;
	case 7:  cout << "Nedjelja"; break;
	default:  cout << "Pogresan broj! ";

	}


	return 0;
}