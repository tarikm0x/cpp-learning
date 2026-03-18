#include <iostream>
using namespace std;

int zbir(int a, int b) {

	return a + b;
}
double zbir(double a, double b) {

	return a + b;
}

int main() {
	int a = 5;
	int b = 6;

	double x = 3.5;
	double y = 2.1;
	cout << zbir(a, b)<<endl;
	cout << zbir(x, y)<<endl;

	return 0;

}
// C++ automatski odabere pravu funkciju na osnovu tipa argumenta 
// to je overloading