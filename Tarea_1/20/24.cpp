#include <iostream>

using namespace std;

int main() {
	int x{ 0 };
	int y{ 0 };
	int suma;
	cout << "Defina un valor para x: ";
	cin >> x;

	cout << "Defina un valor para y: ";
	cin >> y;

	suma = x + y;

	cout << "La suma es: " << suma << "\n";

	if (suma % 2 == 0) {
		cout << "su suma es par" << "\n";
	}
	else {
		cout << "su suma se impar" << "\n";
	}
	return 0;
}