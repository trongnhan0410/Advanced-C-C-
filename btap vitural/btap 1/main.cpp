#include<iostream>
#include<string.h>
#include"Car.hpp"
#include<list>


int main(){
	std::list<Car*> car;
	Sedan* xe1 = new(Sedan);
	SUV* xe2 = new(SUV);
	car.push_back(xe1);
	car.push_back(xe2);
	for (auto x : car) {
		x->inputInfo();
		x->displayInfo();
	}

	delete(xe1);
	delete(xe2);
	return 0;
}