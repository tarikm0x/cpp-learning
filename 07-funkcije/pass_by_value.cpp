#include <iostream> 
using namespace std;
int udvostruci(int a) {

	return 2 * a;

}



int main() {
	cout << "Unesi broj: ";
	int broj;
	cin >> broj;
	cout << "Broj koji ste unijeli je: " << broj << endl;
	cout << "Udvostrucen broj: " << udvostruci(broj) << endl;
	cout << "Vas originalni broj: " << broj << endl;

	return 0;

}
// broj postaje isti nakon poziva f