#include <iostream>
using namespace std;

int main() {
	int broj;
	cout << "Unesi broj: ";
	cin >> broj;

	int i = 0;
	while (broj != 0) {
		broj = broj / 10;
		i++;
	}
	cout << "Broj ima: " << i << " cifre!";
	return 0;

}