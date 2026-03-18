#include <iostream>
using namespace std;

void ispisi(int* n, int vel) {

	for (int i = 0; i < vel; i++) {
		cout << *n + i << " ";
	}

}

int main() {
	int vel = 5;
	int niz[5]{ 1,2,3,4,5 };
	int* p = niz;
	ispisi(p, vel);

	return 0;

}