#include <iostream>
using namespace std;

int main() {
	int broj;
	do {
		cout << "Unesi broj: ";
		cin >> broj;
	} while (broj <= 0 || broj > 10);

	cout << "Bravo unijeli ste: " << broj;

	return 0;
}