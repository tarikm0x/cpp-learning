#include <iostream> 
using namespace std;


void udvostruci(int& a) {

	a = 2 * a;

}



int main() {
	cout << "Unesi broj: ";
	int broj;
	cin >> broj;
	cout << "Broj koji ste unijeli je: " << broj << endl;
	udvostruci(broj);
	cout << "Udvostrucen broj: " << broj << endl;
	cout << "Vas originalni broj: " << broj << endl;

	return 0;

}
// pass by reference - radimo sa originalnom  & znaci sa originalom