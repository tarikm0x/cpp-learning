#include<iostream>

using namespace std;

int stepen(int prvi, int drugi) {

	if (drugi <= 0) return 1;
	return prvi * stepen(prvi, drugi - 1);


}

int main() {

	cout << "Unesi broj: ";
	int a, b;
	cin >> a;
	cout << endl;
	cout << "Unesi na koji stepen: ";
	cin >> b;
	cout << "Rezultat je: " << stepen(a, b);

	return 0;
}