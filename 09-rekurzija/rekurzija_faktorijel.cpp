#include<iostream>

using namespace std;
int faktorijel(int broj) {
	if (broj <= 1) return 1;

	return broj * faktorijel(broj - 1);

}
int main() {

	cout << "Unesi broj: ";
	int a;
	cin >> a;

	cout << faktorijel(a);

	return 0;
}