#include <iostream>
using namespace std;

int main() {
	cout << "Unesi broj: ";
	int a;
	cin >> a;
	int faktorijel = 1;
	for (int i = 1; i <= a; i++) {
		faktorijel *= i;
	}

	cout << "Faktorijel je: " << faktorijel;
	return 0;
}