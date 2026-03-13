#include <iostream>
using namespace std;

int main() {
	cout << "Unesi ocjenu(1-10): ";
	int ocjena;
	cin >> ocjena;
	if (ocjena > 5) {
		cout << "Polozio si ispit! ";
	}
	else {
		cout << "Pao si ispit! ";
	}
	return 0;
}