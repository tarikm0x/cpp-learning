#include <iostream>
using namespace std;


int main() {
	int niz[5]{ 1,2,3,4,5 };
	int* pokazivac = &niz[0];
	//int* pokazivac = niz; - moze i ovako lakse
	for (int i = 0; i < 5; i++) {
		cout << *(pokazivac + i) << " ";
	}

	return 0;

}