#include<iostream>
#include<string>
using namespace std;

int main() {
	string rijec = "hello";
	cout << rijec << endl;
	int duzina = rijec.length();
	for (int i = duzina - 1; i >= 0; i--) {
		cout << rijec[i];
	}
	return 0;
}