#include"EMPLOYEE.hpp"
#include"Dish.hpp"
#include<iostream>
#include<vector>
/*
* Function: changeStatus
* Description: This function change status of tables
* Input:
* 
* Output:
*
*/
void Table::changeStatus() {
	if (getStatus() == BUSY) {
		status = FREE;
		order.clear();
	}
	else
	{
		status = BUSY;
	}
}
/*
* Function: cancelDish
* Description: This function cancel of dishes
* Input:
* a: a integer value
* Output:
*
*/
void Table::cancelDish(int id) {
	for (std::vector<Dish>::iterator x = order.begin(); x != order.end(); ++x) {
		if (id == x->getID()) {
			if (x->getVolume() <= 0) {
				order.erase(x);
				std::cout << "Deleted!!" << std::endl;
				break;
			}
			else {
				x->setVolume(x->getVolume() - 1);
				std::cout << "Deleted!!" << std::endl;
				break;
			}
		}
	}
}
/*
* Function: printOrder
* Description: This function print dishes of tables
* Input:
* 
* Output:
*
*/
void Table::printOrder() {
	for (auto x : order) {
		std::cout << "ID: " << x.getID() << std::endl;
		std::cout << "Name: " << x.getName() << std::endl;
		std::cout << "Price " << x.getPrice() << std::endl;
		std::cout << "Volume " <<x.getVolume() << std::endl;
	}
}
/*
* Function: chargeTable
* Description: This function charge dishes of tables
* Input:
*
* Output:
*
*/
void Table::chargeTable() {
	long long bill_t = 0;
	int count;
	for (auto x : order) {
		std::cout << "ID: " << x.getID() << std::endl;
		std::cout << "Name: " << x.getName() << std::endl;
		std::cout << "Price " << x.getPrice() << std::endl;
		std::cout << "Volume " << x.getVolume() << std::endl;
		bill_t = bill_t + (x.getPrice() * x.getVolume());
		
	}
	std::cout << "Sum: " << bill_t << std::endl;
	std::cout << "VAT 10% " << std::endl;
	std::cout << "Total: " << bill_t + (bill_t / 10) << std::endl;
	std::cout << "1. Charge" << std::endl;
	std::cout << "2. Exit" << std::endl;
	std::cin >> count;
	if (count == 1) {
		changeStatus();
		
		std::cout << "Done!!" << std::endl;
	}
	
}
/*
* Function: setOreder
* Description: This function set dishes of tables
* Input:
* a: a class value
* b: a integer value
* Output:
*
*/
void Table::setOreder(Dish dish,int number) {
	dish.setVolume(number) ;
	order.push_back(dish);
}
/*
* Function: getNumber
* Description: This function get number of tables
* Input:
* 
* Output:
* a: a integer value
*/
int Table::getNumber() {
	return number;
}
/*
* Function: getStatus
* Description: This function get status of tables
* Input:
*
* Output:
* a: a class value
*/
Status Table::getStatus() {
	return status;
}
/*
* Function: getStatus
* Description: This function order dish of tables
* Input:
* vector<Table>& database
* vector<Dish> menu
* a: a integer value
* Output:
* 
*/
void orderFood(std::vector<Table>& database, std::vector<Dish> menu,int number) {
	int id;
	int temp;
	int count = 1;
	for (std::vector<Table>::iterator table = database.begin(); table != database.end(); ++table) {
		if (number == table->getNumber()) {
			table->changeStatus();
			while (count==1)
			{
				for (auto x : menu) {
					std::cout << "Name " << x.getName() << std::endl;
					std::cout << "Price " << x.getPrice() << std::endl;
					std::cout << "ID " << x.getID() << std::endl;
				}
				std::cout << "You choose ID: ";
				std::cin >> id;
				std::cout << "Volume: ";
				std::cin >> temp;
				for (std::vector<Dish>::iterator x = menu.begin(); x != menu.end(); ++x) {
					if (id == x->getID()) {
						table->setOreder(*x, temp);
						std::cout << "Order Success" << std::endl;
						break;
					}
				}
				std::cout << "1. Order the dish other" << std::endl;
				std::cout << "2. Exit" << std::endl;
				std::cin >> count;
			}
			
		}
	}	
}
/*
* Function: cancelOrder
* Description: This function cancel order of tables
* Input:
* vector<Table>& database
* a: a integer value
* Output:
*
*/
void cancelOrder(std::vector<Table>& database, int number) {
	int count = 1;
	int id;
	for (std::vector<Table>::iterator it = database.begin(); it != database.end(); ++it) {
		if (it->getNumber() == number) {
			while (count == 1) {
				it->printOrder();
				std::cout << "ID you want cancel: ";
				std::cin >> id;
				it->cancelDish(id);
				std::cout << "1. Countinue to delete" << std::endl;
				std::cout << "2. Exit" << std::endl;
				std::cin >> count;
			}
		}
	}
}
/*
* Function: printOrder
* Description: This function print oder dish of tables
* Input:
* vector<Table>& database
* a: a integer value
* Output:
*
*/
void printOrder(std::vector<Table> database, int number) {
	int count = 1;
	while (count == 1) {
		for (auto x : database) {
			if (x.getNumber() == number) {
				x.printOrder();
				break;
			}
		}
		std::cout << "0. Exit" << std::endl;
		std::cin >> count;
	}
	
}
/*
* Function: chargeBill
* Description: This function charge Bill of tables
* Input:
* vector<Table>& database
* a: a integer value
* Output:
*
*/
void chargeBill(std::vector<Table>& database, int number) {
		for (auto x : database) {
			if (x.getNumber() == number) {
				x.chargeTable();
			}
		}
}