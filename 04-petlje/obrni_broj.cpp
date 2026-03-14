#include <iostream>
using namespace std;

int main() {
	cout << "Unesi neki broj da je dvocifren ili vise! : ";
	int broj;
	cin >> broj;
	int obrnutbroj = 0;


	while (broj != 0) {
		obrnutbroj = obrnutbroj * 10 + broj % 10;
		broj = (broj / 10);

	}
	cout << "Obrnuti broj je: " << obrnutbroj;
	return 0;
}