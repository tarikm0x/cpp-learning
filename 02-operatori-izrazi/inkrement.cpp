#include <iostream>
using namespace std;

int main() {

	int a = 5;
	int b = 5;
	cout << "a=5, koristim a++ u cout: " << a++ << endl;
	cout << "a nakon cout: " << a << endl;

	cout << endl;

	cout << "b=5, koristim ++b u cout: " << ++b << endl;
	cout << "b nakon cout: " << b << endl;


	return 0;
}