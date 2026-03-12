#include <iostream>
using namespace std;

int main() {

	int a, b;
	cout << "Unesi dva broja: " << endl;
	cin >> a >> b;

	if (a > 0 && b > 0) {
		cout << "Oba su pozitivna!" << endl;
	}



	if (a % 2 == 0 || b % 2 == 0) {
		cout << "Bar jedan je paran!" << endl;
	}

	return 0;
}