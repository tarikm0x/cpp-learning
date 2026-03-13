#include <iostream>
using namespace std;

int main() {
	cout << "Unesi tri broja! " << endl;
	int a, b, c;
	cin >> a >> b >> c;
	int najveciBroj;
	if (a > b) {
		if (a > c) {
			najveciBroj = a;
		}
		else {
			najveciBroj = c;
		}
	}
	else {
		if (b > c) {
			najveciBroj = b;
		}
		else {

			najveciBroj = c;
		}


	}
	cout << "Najveci broj je: " << najveciBroj;
	return 0;
}