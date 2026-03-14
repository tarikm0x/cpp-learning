#include <iostream>
using namespace std;

int main() {
	cout << "Unesi neki broj da je dvocifren ili vise! : ";
	int broj;
	int original;

	cin >> broj;
	original = broj;
	int obrnutbroj = 0;


	while (broj != 0) {
		obrnutbroj = obrnutbroj * 10 + broj % 10;
		broj = (broj / 10);

	}
	if (original == obrnutbroj) {
		cout << "Broj " << original << " je palindrom!";
	}
	else
	{
		cout << "Broj " << original << " nije palindrom!";
	}


	return 0;

}