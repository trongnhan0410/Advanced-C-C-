#include<iostream>
#include<list>
#include<string>
using namespace std;
		
class Vehicle {
public:
	virtual	void display() const = 0;
	virtual void input() = 0;
protected:
	string model;
	int year;
};

class Truck : public Vehicle {
private:
	string option;
public:
	string addOption(string option) const {
		 return option ;
	}
	void display() const override {
		cout << "This is Truck with " << Truck::addOption(option) << endl;
		cout << "Model: " << Truck::model << endl;
		cout << "Year: " << Truck::year << endl;
	}
	void input() override {
		cout << "Nhap option: ";
		cin >> this->option;
		cout << "Nhap year: ";
		cin >> this->year;
		cout << "Nhap model: ";
		cin >> this->model;

	}
};

class Sedan : public Vehicle {
private:
	int Speed;
public:
	int addOption(int option) const {
		return option;
	}
	void display() const override {
		cout << "This is Sedan with speed " << Sedan::addOption(Speed) << endl;
		cout << "Model: " << Sedan::model << endl;
		cout << "Year: " << Sedan::year << endl;
	}
	void input() override {
		cout << "Nhap Speed: ";
		cin >> this->Speed;
		cout << "Nhap year: ";
		cin >> this->year;
		cout << "Nhap model: ";
		cin >> this->model;

	}
};

int main() {
	list<Vehicle*> database ;
	Vehicle* car = NULL;
	int volume;
	string typeCar;
	cout << "Nhap so luong: ";
	cin >> volume;

	for (int i = 0; i < volume; i++) {
		cout << "Nhap loai xe: ";
		cin >> typeCar;
		if (typeCar == "Truck") {
			car = new Truck();
		}
		else if (typeCar=="Sedan")
		{
			car = new Sedan();
		}
		else
		{
			cout << "INVALID CAR" << endl;
		}
		car->input();
		database.push_back(car);
	}

	for (auto x : database) {
		x->display();
	}

	return 0;
}