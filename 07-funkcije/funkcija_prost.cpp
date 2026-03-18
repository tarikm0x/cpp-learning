#include <iostream>
using namespace std;

bool prost(int a) {

	int counter = 0;
	if (a <= 1) {
		cout << "Broj nije prost!";
		return false;
	}
	else {
		for (int i = 2; i <= a; i++) {
			if (a % i == 0) {
				counter++;

			}


		}

	}

	if (counter == 1) {
		return true;

	}
	else {

		return false;
	}



}

int main() {

	cout << "Unesi broj: ";
	int broj;
	cin >> broj;

	if (prost(broj)) {
		cout << "Broj je prost!";
	}
	else {
		cout << "Broj nije prost!";
	}

	return 0;

}