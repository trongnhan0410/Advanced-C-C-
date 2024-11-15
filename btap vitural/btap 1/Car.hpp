#ifndef _CAR_HPP_
#define _CAR_HPP_
#include<string>

class Car {
protected:
	std::string model;
	int year;
public:
	virtual void displayInfo() const = 0;
	virtual void inputInfo() = 0;
};

class Sedan :public Car {
public:
	void displayInfo() const override;
	void inputInfo() override;
};

class SUV :public Car {
public:
	void displayInfo() const override;
	void inputInfo() override;
};
#endif // !_CAR.HPP_
