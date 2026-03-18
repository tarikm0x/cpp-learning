#include <iostream>
using namespace std;

int najveci(int a, int b, int c) {
	int najveci;
	if (a > b && a > c) {
		najveci = a;
	}
	else if (b > a && b > c) {
		najveci = b;
	}
	else {
		najveci = c;
	}


	return najveci;
}




int main() {
	int a, b, c;
	cout << "Unesi tri broja: ";
	cin >> a >> b >> c;

	cout << "Najveci od njih je: " << najveci(a, b, c);



	return 0;

}