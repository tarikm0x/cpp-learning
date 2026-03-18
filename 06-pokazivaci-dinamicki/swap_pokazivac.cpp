#include <iostream>
using namespace std;


int main() {
	int broj1 = 10;
	int broj2 = 20;
	int* p1 = &broj1;
	int* p2 = &broj2;
	cout << "Prvi broj je: " << broj1 << endl;
	cout << "Drugi broj je: " << broj2 << endl;
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	cout << "Prvi broj je: " << broj1 << endl;
	cout << "Drugi broj je: " << broj2 << endl;


	return 0;

}