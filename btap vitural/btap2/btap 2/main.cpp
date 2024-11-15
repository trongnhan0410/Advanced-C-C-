#include <iostream>
#include <string>
#include <vector>
#include "Engine.hpp"
using namespace std;

int main() {
	vector<Car*> database;
    string carType;
    string model;
    string typeEngine;
    int year;
    int car;
	cout << "volume car: ";
	
	cin >> car;
	for (int i = 0; i <= car;i++) {
		cout << "Type Car: " ;
        cin >> carType;
        cout<<"model: ";
        cin>>model;
        cout<<"year: ";
        cin>>year;
        cout<<"type engine: ";
        cin>>typeEngine;
        if (carType == "Sedan")
        {
            Car* sedan = new Sedan(model,year,typeEngine);
           
            database.push_back(sedan);
        }
        else if (carType == "SUV")
        {
            Car* suv = new SUV(model,year,typeEngine);
           
            database.push_back(suv);
        }
        else
        {
            cout << "Invalid car type" << endl;
            
        }
	}
    for (auto x : database) {
        x->displayInfo();
    }
    for (auto i:database)
    {
        delete i;
    }
    return 0;
}