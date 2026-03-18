#include <iostream>
using namespace std;


int main() {
	int n;
	cout << "Unesi koju velicinu niza zelis: ";
	cin >> n;
	int* niz = new int[n];
	int* p = niz;
	for (int i = 0; i < n; i++) {
		cout << "Unesi " << i + 1 << " clan niza:";
		cin >> *(p + i);
	}
	for (int i = 0; i < n; i++) {
		cout << *(niz + i) << " ";
	}
	delete[] niz;

	return 0;

}