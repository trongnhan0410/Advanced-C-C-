#include"MANAGER.hpp"
#include"EMPLOYEE.hpp"
#include"Dish.hpp"
#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<Table> table;
	vector<Dish> menu;
	string status;
	int number;
	int temp=0;
	int choose;
	while (1)
	{
		do
		{
			std::cout << "1. Manager" << std::endl;
			std::cout << "2. Employee " << std::endl;
			cin >> temp;
		} while (temp != 1 && temp != 2);


		while (temp == 1) {
			std::cout << "1. Setup number of table" << std::endl;
			std::cout << "2. Add dish" << std::endl;
			std::cout << "3. Edit dish" << std::endl;
			std::cout << "4. Delete dish" << std::endl;
			std::cout << "5. List dish" << std::endl;
			std::cout << "0. Exit" << std::endl;
			cin >> choose;
			switch (choose)
			{
			case 1:
				setup_table(table, menu);
				break;
			case 2:
				add_dish(menu);
				break;
			case 3:
				edit_dish(menu);
				break;
			case 4:
				delete_dish(menu);
				break;
			case 5:
				print_dish(menu);
				break;
			case 0:
				temp = 0;
				break;
			default:
				break;
			}
			
			//break;
		}
		while (temp == 2)
		{
			if (table.size() == 0) {
				std::cout << "Unvailable that service!!!" << std::endl;
				break;
			}
			else
			{
				for (auto x : table) {
					cout << "Table: " << x.getNumber() << endl;
					if (x.getStatus() == FREE) {
						status = "FREE";
						cout << "STATUS: " << status << endl;
					}
					else {
						status = "BUSY";
						cout << "STATUS: " << status << endl;
					}

				}
			}
			
			std::cout << "Number of table that service: ";
			std::cin >> number;
			for (std::vector<Table>::iterator it = table.begin(); it != table.end(); ++it) {
				while (it->getNumber() == number) {
					std::cout << "1. Order dish" << std::endl;
					std::cout << "2. Cancel dish" << std::endl;
					std::cout << "3. List order" << std::endl;
					std::cout << "4. Charge order" << std::endl;
					std::cout << "0. Exit" << std::endl;
					cin >> choose;
					switch (choose)
					{
					case 1:
						orderFood(table, menu, number);
						break;
					case 2:
						cancelOrder(table, number);
						break;
					case 3:
						printOrder(table, number);
						break;
					case 4:
						chargeBill(table, number);
						break;
					case 0:
						temp = 0;
						number = 0;
						break;
					default:
						break;
					}
				}
			}
			
			
		}
	}
	
	
	return 0;

}