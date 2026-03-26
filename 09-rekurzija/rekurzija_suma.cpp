#include<iostream>

using namespace std;

int suma(int broj) {

	if (broj <= 0) return 0;
	return broj + suma(broj - 1);
}

int main() {

	cout << "Unesi broj: ";
	int a;
	cin >> a;
	cout << suma(a);

	return 0;
}