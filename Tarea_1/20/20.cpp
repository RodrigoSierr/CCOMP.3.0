#include <iostream>

using namespace std;

int main() {
	double pi{ 3.14159 };
	int rad;
	double diametro;
	double area;
	double circunferencia;

	cout << "Escriba el Radio de su Circunferencia: ";
	cin >> rad;

	diametro = rad * rad;
	
	cout << "El diametro seria: " << diametro << "\n";
	
	circunferencia = (2 * pi) * rad;

	cout << "La circunferencia es: " << circunferencia << "\n";

	area = pi * (rad * rad);

	cout << "El area del circulo es: " << area << "\n";



	return 0;
}