#include <iostream>

using namespace std;

int main() {
	int a;
	int num1, num2, num3, num4;
	
	cout << "Su numero tiene que tener 4 cifras" << "\n";
	cin >> a;

	if ((a >= 1000) && (a <= 9999)) {
		cout << "su numero es correcto" << "\n";
	}
	else {
		cout << "su numero no cumple la condicion" << "\n";
	}
	

	num1 = a / 1000;
	num2 = (a / 100) % 10;
	num3 = (a / 10) % 10;
	num4 = a % 10;

	cout << "Número invertido: " << num4 << num3 << num2 << num1 << endl;

	return 0;
}