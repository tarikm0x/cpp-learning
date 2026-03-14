#include <iostream>
using namespace std;


int main() {
	int broj;
	cout << "Unesi broj: ";
	cin >> broj;
	int counter = 0;
	if (broj <= 1) {
		cout << "Broj nije prost!";
		return 0;
	}
	else {
		for (int i = 2; i <= broj; i++) {
			if (broj % i == 0) {
				counter++;

			}


		}

	}

	if (counter == 1) {
		cout << "Broj je prost! ";

	}
	else {
		cout << "Broj nije prost! ";
	}


	return 0;

}