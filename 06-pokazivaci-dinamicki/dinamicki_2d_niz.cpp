#include <iostream>
using namespace std;


int main() {

	int** matrica = new int* [3];
	for (int i = 0; i < 3; i++) {
		matrica[i] = new int[3];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Unesi [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matrica[i][j];

		}
	}
	for (int i = 0; i < 3; i++) {
		cout << endl;
		for (int j = 0; j < 3; j++) {
			cout << matrica[i][j] << " ";

		}
	}

	for (int i = 0; i < 3; i++) {
		delete[] matrica[i];
	}
	delete[]matrica;


	return 0;

}