#include<iostream>
#include"EMPLOYEE.hpp"
#include"MANAGER.hpp"
#include"ROOM.hpp"
#include<string>
#include<vector>
#include<list>

int main() {
	std::list<Employee> employee;
	std::list<Room> room;
	std::string account;
	std::string  passwork;
	int choice = 0;
	/*
	- Employee:
	account : 12345
	passwork: 12345
	- manager:
	account : 12345678
	passwork: 12345678
	*/
	while (1)
	{
		std::cout << "Account: ";
		std::cin >> account;
		std::cout << "passwork: ";
		std::cin >> passwork;
		int temp;
		while (account == "12345678" && passwork == "12345678") {
			std::cout << "1.Employee" << std::endl;
			std::cout << "2.Room" << std::endl;
			std::cout << "3.Service" << std::endl;
			std::cout << "0. Exit" << std::endl;
			std::cout << "Your choice: ";
			std::cin >> choice;
			switch (choice)
			{
			case 1:
				std::cout << "1. Add employee" << std::endl;
				std::cout << "2.Edit employee" << std::endl;
				std::cout << "3.Delete employee" << std::endl;
				std::cout << "4.Set the shift for employee" << std::endl;
				std::cout << "5. List information employee" << std::endl;
				std::cout << "6.Exit" << std::endl;
				std::cout << "Your choice: ";
				std::cin >> temp;
				if (temp == 1)
				{
					addEmployee(employee);
				}
				else if (temp == 2) {
					editEmployee(employee);
				}
				else if (temp == 3) {
					deleteEmployee(employee);
				}
				else if (temp == 4) {
					setShift(employee);
				}
				else if (temp == 5) {
					printInformation(employee);
				}
				else if (temp == 6) {
					choice = 0;
				}
				break;
			case 2:
				std::cout << "1.Add room" << std::endl;
				std::cout << "2.Delete room" << std::endl;
				std::cout << "3.Check status room" << std::endl;
				std::cout << "4.Exit" << std::endl;
				
				std::cout << "Your choice: ";
				std::cin >> temp;
				if (temp == 1) {
					addRoom(room);
				}
				else if (temp == 2) {
					deleteRoom(room);
				}
				else if (temp == 3) {
					checkRoom(room);
				}
				else
				{
					choice = 0;
				}
				break;
			case 3:
				service();
				break;
			default:
				account = "";
				break;
			}
		}
		while (account == "12345" && passwork == "12345")
		{
			std::cout << "1. Check shift" << std::endl;
			std::cout << "2. Edit information" << std::endl;
			std::cout << "3. Book room " << std::endl;
			std::cout << "4. Return room" << std::endl;
			std::cout << "5. List room" << std::endl;
			std::cout << "0. Exit" << std::endl;
			std::cout << "Your choice: ";
			std::cin >> choice;
			switch (choice)
			{
			case 1:
				checkShift(employee);
				break;
			case 2:
				editEmployee(employee);
				break;
			case 3:
				reservatinon(room);
				break;
			case 4:
				returnRoom(room);
				break;
			case 5:
				printStatusRoom(room);
				break;
			default:
				account = "";
				break;
			}
		}
	}
	
	return 0;
}	