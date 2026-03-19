#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << "Unesi neku rijec: ";
	string rijec;
	cin >> rijec;

	string rijec2;
	cout << rijec << endl;
	int duzina = rijec.length();
	for (int i = duzina - 1; i >= 0; i--) {
		cout << rijec[i];
		rijec2 += rijec[i];
	}
	cout << endl;


	if (rijec == rijec2) {
		cout << "Rijec je palindrom!";
	}
	else {
		cout << "Rijec nije palindrom!";
	}






	return 0;
}