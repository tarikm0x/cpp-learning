#include <iostream>
using namespace std;

int main() {
	cout << "Unesi broj: ";
	int broj;
	cin >> broj;
	if (broj > 0) {
		cout << "Broj je pozitivan! ";
	}
	else if (broj < 0) {
		cout << "Broj je negativan!";
	}
	else {
		cout << "Unio si nulu!";
	}


	return 0;
}