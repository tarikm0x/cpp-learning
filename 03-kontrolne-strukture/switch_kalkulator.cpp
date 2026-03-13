#include <iostream>
using namespace std;

int main() {

	cout << "Unesi dva broja: " << endl;
	int a, b;
	cin >> a >> b;
	cout << "Unesi operaciju koju zelis(+,-,*,/):";
	char operacija;
	cin >> operacija;
	switch (operacija) {
	case '+': cout << "Zbir je: " << a + b; break;
	case '-': cout << "Razlika je: " << a - b; break;
	case '*': cout << "Proizvod je: " << a * b; break;
	case '/': cout << "Kolicnik je: " << a / b; break;
	default: cout << "Pogresno si unio operaciju!" << endl;




	}

	return 0;
}