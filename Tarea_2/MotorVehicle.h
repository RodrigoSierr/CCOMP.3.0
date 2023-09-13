#pragma once
#include <iostream>
#include <string>

using namespace std;

class MotorVehicle
{
private: 
	string make;
	string fueltype;
	int yearOfManufacture;
	string color;
	int engineCapacity;
public:
	MotorVehicle() {
		make = "";
		fueltype = "";
		yearOfManufacture = 0;
		color = "";
		engineCapacity = 0;
	}
	MotorVehicle(string make_, string fueltype_, int yearOfManufacture_, string color_, int engineCapacity_)
		: make(make_), fueltype(fueltype_), yearOfManufacture(yearOfManufacture_), color(color_), engineCapacity(engineCapacity_) {
	}
	void setmake(string make_) {
		make = make_;
	}
	void setfueltype(string fueltype_) {
		fueltype = fueltype_;
	}
	void setyearOfManufacture(int yearOfManufacture_) {
		yearOfManufacture = yearOfManufacture_;
	}
	void setcolor(string color_) {
		color = color_;
	}
	void setengineCapacity(int engineCapacity_) {
		engineCapacity = engineCapacity_;
	}
	string getmake() {
		return make;
	}
	string getfueltype() {
		return fueltype;
	}
	int getyearOfManufacture() {
		return yearOfManufacture;
	}
	string getcolor() {
		return color;
	}
	int getengineCapacity() {
		return engineCapacity;
	}
	void displatCarDetails() {
		cout << "\n";
		cout << "\t" <<"Car Details" << endl;
		cout << "The make is: " << getmake() << endl;
		cout << "FuelType is: " << getfueltype() << endl;
		cout << "Year of Manufacture is: " << getyearOfManufacture() << endl;
		cout << "The color is: " << getcolor() << endl;
		cout << "The EngineCapacity is: " << getengineCapacity() << endl;
		return;
	}
};
