#include <iostream>
using namespace std;

int main() {

	int _int= 5;
	double _double = 3.14159265359;
	float _float = 3.14159265359;
	char _char = 'a';
	bool _bool = true;

	cout << "int -> " << _int <<" (size: "<<sizeof(_int)<<" bytes)"<< endl;
	cout << "double -> " << _double << " (size: " << sizeof(_double) << " bytes)" << endl;
	cout << "float -> " << _float << " (size: " << sizeof(_float) << " bytes)" << endl;
	cout << "char -> " << _char << " (size: " << sizeof(_char) << " bytes)" << endl;
	cout << "bool=true -> " << _bool << " (size: " << sizeof(_bool) << " bytes)" << endl;




	return 0;
}