#include <iostream>
using namespace std;


int main() {
	int matrica[3][3]{ 1,2,5,2,3,6,2,1,5 };
	int matrica2[3][3]{ 5,5,5,2,3,3,2,9,11 };

	int rezultat[3][3];
	for (int i = 0; i < 3; i++) {
		cout << endl;
		for (int j = 0; j < 3; j++) {
			rezultat[i][j] = matrica[i][j] + matrica2[i][j];
			cout << rezultat[i][j] << " ";

		}
	}

	return 0;

}