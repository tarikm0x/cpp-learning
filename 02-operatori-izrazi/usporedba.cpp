#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Unesi dva broja: " << endl;
	cin >> a >> b;

	if (a == b) {
		cout << "Brojevi su jednaki!" << endl;
	}
	if (a != b) {
		cout << "Brojevi nisu jednaki!" << endl;
	}
	if (a > b) {
		cout << a << " je veci od " << b << endl;
	}
	if (a < b) {
		cout << a << " je manji od " << b << endl;
	}
	if (a >= b) {
		cout << a << " je veci ili jednak od " << b << endl;
	}
	if (a <= b) {
		cout << a << " je manji ili jednak od " << b << endl;
	}
	cout << endl;
	cout << a << " == " << b << " : " << (a == b) << endl;
	cout << a << " != " << b << " : " << (a != b) << endl;
	cout << a << " >  " << b << " : " << (a > b) << endl;
	cout << a << " <  " << b << " : " << (a < b) << endl;
	cout << a << " >= " << b << " : " << (a >= b) << endl;
	cout << a << " <= " << b << " : " << (a <= b) << endl;

	return 0;
}