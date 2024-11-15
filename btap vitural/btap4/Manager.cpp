
#include<list>
#include<string>
#include<iostream>
class Service {
public:
	virtual void performService() const = 0;
};

class OilChange : public Service {
public:
	void performService() const override {
		std::cout << "Change oil!!" << std::endl;
	}
};
class TireRotation : public Service {
public:
	void performService() const override {
		std::cout << "Tire Rotation!!" << std::endl;
	}
};

class Car {
protected:
	std::string model;
	int year;
	std::list<Service*> services;
	int volumeService;
	std::string nameService;
	
public:
	virtual void addService() = 0;

	virtual void display() const = 0;

	virtual void input() = 0;
	
};

class Truck : public Car {
public:
	void addService() {

		std::cout << "So luong service: ";
		std::cin >> this->volumeService;
		for (int i = 0; i < this->volumeService; i++) {
			std::cout << "Service: ";
			std::cin >> nameService;
			if (nameService == "OilChange")
			{
				services.push_back(new OilChange());
			}
			else if (nameService == "TireRotation") {
				services.push_back(new TireRotation());
			}
		}
	}
	void display() const override {
		std::cout << "This is  Truck" << std::endl;
		std::cout << "Model: " << this->model << std::endl;
		std::cout << "Year: " << this->year << std::endl;
		std::cout << "Services added in Truck: " << std::endl;
		for (auto x : services) {
			x->performService();
		}
	}
	void input() {
		std::cout << "Nhap model Truck: ";
		std::cin >> this->model;
		std::cout << "Nhap year Truck:";
		std::cin >> this->year;
		addService();
	}
	~Truck() {
		for (auto service : services) {
			delete service;  // Free dynamically allocated services
		}
	}
};

class Motobike : public Car {
public:
	void addService() {

		std::cout << "So luong service: ";
		std::cin >> this->volumeService;
		for (int i = 0; i < this->volumeService; i++) {
			std::cout << "Service: ";
			std::cin >> nameService;
			if (nameService == "OilChange")
			{
				services.push_back(new OilChange());
			}
			else if (nameService == "TireRotation") {
				services.push_back(new TireRotation());
			}
		}
	}
	void display() const override {
		std::cout << "This is  Motobike" << std::endl;
		std::cout << "Model: " << this->model << std::endl;
		std::cout << "Year: " << this->year << std::endl;
		std::cout << "Services added in Motobike: " << std::endl;
		for (auto x : services) {
			x->performService();
		}
	}
	void input() {
		std::cout << "Nhap model Motobike: ";
		std::cin >> this->model;
		std::cout << "Nhap year Motobike:";
		std::cin >> this->year;
		addService();
	}
	~Motobike() {
		for (auto service : services) {
			delete service;  // Free dynamically allocated services
		}
	}
};

int main() {
	std::list<Car*> database;
	Car* car = NULL;
	int volume;
	std::string nameCar;
	std::cout << "Nhap so luong: ";
	std::cin >> volume;
	for (int i = 0; i < volume; i++) {
		std::cout << "Nhap name Car: ";
		std::cin >> nameCar;
		if (nameCar == "Truck") {
			car = new Truck();
		}
		else if (nameCar == "Motobike") {
			car = new Motobike();
		}
		else
		{
			std::cout << "INVALID!!" << std::endl;
		}	
		car->input();
		database.push_back(car);
	}
	for (auto x : database) {
		x->display();
	}
	for (auto x: database)
	{
		delete x;
	}
	return 0;
}

