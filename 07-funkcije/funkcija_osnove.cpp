#include <iostream>
using namespace std;

int zbir(int a, int b) {

	return a + b;
}

int main() {
	int a, b;
	cout << "unesi dva broja: ";
	cin >> a >> b;

	cout << "Njihov zbir je: " << zbir(a, b);

	return 0;

}