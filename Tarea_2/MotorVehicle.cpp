#include "MotorVehicle.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	string make;
	string fueltype;
	int yearOfManufacture;
	string color;
	int engineCapacity;
	
	cout << "Cual es la marca de su carro: ";
	cin >> make;
	cout << "Cual es el tipo de carro que tiene: ";
	cin >> fueltype;
	cout << "Cual es el año de creacion de su coche: ";
	cin >> yearOfManufacture;
	cout << "Cual es el color de su coche: ";
	cin >> color;
	cout << "Cuantos caballos de fuerza tiene su carro: ";
	cin >> engineCapacity;

	MotorVehicle carro(make, fueltype, yearOfManufacture, color, engineCapacity);
	carro.displatCarDetails();

	return 0;
}
