#include<iostream>
#include<string>
using namespace std;

int main() {
	string recenica;
	cout << "Unesi recenicu: ";
	getline(cin, recenica);
	int brojRijeci = 0;
	char space = ' ';
	for (int i = 0; i < recenica.length(); i++) {
		if (recenica[i] == space) {
			brojRijeci++;

		}
	}



	cout << "Broj rijeci: " << brojRijeci + 1;


	return 0;
}