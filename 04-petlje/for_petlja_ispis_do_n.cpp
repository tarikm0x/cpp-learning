#include <iostream>
using namespace std;

int main() {
	cout << "Unesi neki broj: ";
	int broj;
	cin >> broj;
	for (int i = 1; i <= broj; i++) {
		cout << i << endl;
	}

	return 0;
}