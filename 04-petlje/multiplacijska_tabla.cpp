#include <iostream>
using namespace std;

int main() {
	cout << "Unesi neki broj: ";
	int broj;
	cin >> broj;
	for (int i = 1; i <= 10; i++) {
		cout << broj << " * " << i << " = " << i * broj << endl;
	}


	return 0;
}