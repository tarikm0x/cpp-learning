#include <iostream>
using namespace std;

int main() {
	cout << "Unesi neki broj: ";
	int broj;
	int suma = 0;
	cin >> broj;
	for (int i = 1; i <= broj; i++) {
		suma += i;
	}
	cout << suma;
	return 0;
}