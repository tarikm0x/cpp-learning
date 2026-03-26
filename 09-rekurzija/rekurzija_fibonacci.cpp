#include<iostream>

using namespace std;



int fibonacci(int broj) {
	if (broj == 0) return 0;
	if (broj == 1) return 1;

	return fibonacci(broj - 2) + fibonacci(broj - 1);


}

int main() {

	cout << "Unesi broj: ";
	int a;
	cin >> a;
	cout << fibonacci(a);


	return 0;
}