#include"MANAGER.hpp"
#include<iostream>
#include<vector>
#include"Dish.hpp"
/*
* Function: setup_table
* Description: This function set up of tables
* Input:
  vector<Table>& database
  vector<Dish> menu
* Output:
*
*/
void setup_table(std::vector<Table>& database, std::vector<Dish> menu) {
	int temp;
	std::cout << "Enter table number ";
	std::cin >> temp;
	for (int i = 0; i < temp; ++i) {
		Table table(menu);
		database.push_back(table);
	}
}
/*
* Function: add_dish
* Description: This function add dishes
* Input:
  vector<Dish> menu
* Output:
*
*/
void add_dish(std::vector<Dish>& menu) {
	std::string name;
	long price;
	int count = 1;
	while (count == 1) {
		std::cout << "Name: ";
		std::cin >> name;
		std::cout << "price: ";
		std::cin >> price;
		Dish dish(name, price);
		menu.push_back(dish);
		std::cout << "1. Countinue to add dish" << std::endl;
		std::cout << "2. Exit" << std::endl;
		std::cin >> count;
	}
}
/*
* Function: edit_dish
* Description: This function edit dishes
* Input:
  vector<Dish> menu
* Output:
*
*/
void edit_dish(std::vector<Dish>& menu) {
	int id;
	long long prices;
	if (menu.size() != 0) {
		for (auto x : menu) {
			std::cout << "ID " << x.getID() << std::endl;
			std::cout << "Name: " << x.getName() << std::endl;
			std::cout << "Price: " << x.getPrice() << std::endl;
		}
		std::cout << "Enter ID: ";
		std::cin >> id;
		std::cout << "Price edit" << std::endl;
		std::cin >> prices;
		for (std::vector<Dish>::iterator x = menu.begin(); x != menu.end(); ++x) {
			if (id == x->getID()) {
				std::string temp = x->getName();
				Dish dish(temp, prices);
				menu.erase(x);
				menu.push_back(dish);
				break;
			}
		}
	}
	else
	{
		std::cout << "Unvailable!!" << std::endl;
	}
	
}
/*
* Function: print_dish
* Description: This function print menu
* Input:
  vector<Dish> menu
* Output:
*
*/
void print_dish(std::vector<Dish> menu) {
	for (auto x : menu) {
		std::cout << "ID: " << x.getID() << std::endl;
		std::cout << "Name: " << x.getName() << std::endl;
		std::cout << "Price: " << x.getPrice() << std::endl;
	}
}
/*
* Function: delete_dish
* Description: This function delete dish
* Input:
  vector<Dish> menu
* Output:
*
*/
void delete_dish(std::vector<Dish>& menu) {
	print_dish(menu);
	int id;
	std::cout << "Choose ID that you want delete : ";
	std::cin >> id;
	
	for (std::vector<Dish>::iterator x = menu.begin(); x!=menu.end() ; ++x) {
		if (id == x->getID()) {
			menu.erase(x);
			break;
		}
	}
	std::cout << "Deleted !!!" << std::endl;
}