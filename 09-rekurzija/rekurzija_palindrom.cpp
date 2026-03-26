#include<iostream>
#include<string>
using namespace std;

bool palindrom(string rijec, int poc, int kraj) {
	if (rijec[poc] != rijec[kraj]) return false;
	if (poc >= kraj) return true;
	return palindrom(rijec, poc + 1, kraj - 1);

}

int main() {

	cout << "Unesi rijec: ";
	string a;
	cin >> a;
	if (palindrom(a, 0, a.size() - 1)) {
		cout << "Rijec je palindrom!";
	}
	else {
		cout << "Rijec nije palindrom!";
	}


	return 0;
}