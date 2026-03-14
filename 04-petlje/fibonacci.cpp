#include <iostream>
using namespace std;

int main() {
	int broj;
	cout << "Unesi broj: ";
	cin >> broj;
	int a = 0;
	int b = 1;
	int temp = 0;

	while (a <= broj) {

		cout << a << " ";

		temp = a + b;
		a = b;
		b = temp;




	}

	return 0;

}