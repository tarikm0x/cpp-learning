#include<iostream>
#include<string>
using namespace std;

int main() {
	string recenica;
	cout << "Unesi neku recenicu: ";
	getline(cin, recenica);
	char karakter;
	cout << "Unesi koji karakter zelis da pretrazis: ";
	cin >> karakter;

	bool nadjen = false;
	for (int i = 0; i < recenica.length(); i++) {
		if (recenica[i] == karakter) {
			cout << "Karakter na poziciji: " << i;
			nadjen = true;
			break;
		}
	}
	if (!nadjen) {
		cout << "Karakter ne postoji! ";
	}






	return 0;
}