#include<iostream>
#include"Car.hpp"
#include<string>
void Sedan::inputInfo() {
	std::cout << "Car's Sedan model: ";
	std::cin >> Sedan::model;
	std::cout << "Car's Sedan year: ";
	std::cin >> Sedan::year;
}

void Sedan::displayInfo() const {
	std::cout << "Car's Sedan model: " << Sedan::model << std::endl;
	std::cout << "Car's Sedan year: " << Sedan::year << std::endl;
}

void SUV::inputInfo() {
	std::cout << "Car's SUV model: ";
	std::cin >> SUV::model;
	std::cout << "Car's SUV year: ";
	std::cin >> SUV::year;
}

void SUV::displayInfo() const {
	std::cout << "Car's SUV model: " << SUV::model << std::endl;
	std::cout << "Car's SUV year: " << SUV::year << std::endl;
}