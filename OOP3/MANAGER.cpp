#include"MANAGER.hpp"
#include"EMPLOYEE.hpp"
#include"ROOM.hpp"
#include<vector>
#include<list>
#include<iostream>
#include<string>
/*
* Function: addEmployee
* Description: This function add Employee 
* Input:
*   list<Employee>& employee
* Output:
*   
*/
void addEmployee(std::list<Employee>& employee) {
	std::string name;
	int numberPhone;
	std::string position;
	int count = 1;
	while (count == 1) {
		std::cout << "Name ";
		std::cin >> name;
		std::cout << "Number Phone: ";
		std::cin >> numberPhone;
		std::cout << "Position: ";
		std::cin >> position;
		Employee temp(name, numberPhone, position);
		employee.push_back(temp);
		std::cout << "Add success!!!" << std::endl;
		std::cout << "1. Add the employee other" << std::endl;
		std::cout << "0. Exit" << std::endl;
		std::cin >> count;
	}
}
/*
* Function: printInformation
* Description: This function print Information of employee
* Input:
*   list<Employee>& employee
* Output:
*
*/
void printInformation(std::list<Employee> employee) {
	int count;
	for (auto x : employee) {
		std::cout << "ID: " << x.getID() << std::endl;
		std::cout << "Name: " << x.getName() << std::endl;
		std::cout << "Number Phone: " << x.getNumberPhone() << std::endl;
		std::cout << "Positon: " << x.getPosition() << std::endl;
	}
	std::cout << "0. Exit" << std::endl;
	std::cin >> count;
}
/*
* Function: editEmployee
* Description: This function edit Information of employee
* Input:
*   list<Employee>& employee
* Output:
*
*/
void editEmployee(std::list<Employee>& employee) {
	int count;
	int id;
	std::string position;
	for (auto x : employee) {
		std::cout << "ID: " << x.getID() << std::endl;
		std::cout << "Name: " << x.getName() << std::endl;
		std::cout << "Number Phone: " << x.getNumberPhone() << std::endl;
		std::cout << "Positon: " << x.getPosition() << std::endl;
	}
	std::cout << "ID you want edit: " << std::endl;
	std::cin >> id; std::cin.ignore();
	std::cout << "Position edit: " << std::endl;
	getline(std::cin,position);
	for (std::list<Employee>::iterator it = employee.begin(); it != employee.end(); ++it) {
		if (id == it->getID()) {
			Employee temp(it->getName(), it->getNumberPhone(), position);
			employee.erase(it);
			employee.push_back(temp);
			std::cout << "Edit Successed !!" << std::endl;
			break;
		}
	}
	std::cout << "0. Exit" << std::endl;
	std::cin >> count;
}
/*
* Function: deleteEmployee
* Description: This function delete a employee
* Input:
*   list<Employee>& employee
* Output:
*
*/
void deleteEmployee(std::list<Employee>& employee) {
	int id;
	int count;
	for (auto x : employee) {
		std::cout << "ID: " << x.getID() << std::endl;
		std::cout << "Name: " << x.getName() << std::endl;
		std::cout << "Number Phone: " << x.getNumberPhone() << std::endl;
		std::cout << "Positon: " << x.getPosition() << std::endl;
	}
	std::cout << "ID you want delete: " << std::endl;
	std::cin >> id;
	for (std::list<Employee>::iterator it = employee.begin(); it != employee.end(); ++it) {
		if (id == it->getID()) {
	
			employee.erase(it);
			std::cout << "Delete Successed !!" << std::endl;
			break;
		}
	}
	std::cout << "0. Exit" << std::endl;
	std::cin >> count;
}
/*
* Function: setShift
* Description: This function set the shift of employee
* Input:
*   list<Employee>& employee
* Output:
*
*/
void setShift(std::list<Employee>& employee) {
	std::string day_t;
	std::string session_t;
	Day day;
	int id;
	Session session;
	for (auto x : employee) {
		std::cout << "ID: " << x.getID() << std::endl;
		std::cout << "Name: " << x.getName() << std::endl;
		std::cout << "Number Phone: " << x.getNumberPhone() << std::endl;
		std::cout << "Positon: " << x.getPosition() << std::endl;
	}
	int count = 1;
	while (count == 1)
	{
		std::cout << "ID: ";
		std::cin >> id;
		for (std::list<Employee>::iterator it = employee.begin(); it != employee.end(); ++it) {
			if (id == it->getID()) {
				std::cout << "Day: ";
				std::cin >> day_t;
				std::cout << "Session: ";
				std::cin >> session_t;
				if (day_t == "MONDAY") {
					day = MONDAY;
				}
				else if (day_t == "TUESDAY") {
					day = TUESDAY;
				}
				else if (day_t == "WEDNESDAY") {
					day = WEDNESDAY;
				}
				else if (day_t == "THURSDAY") {
					day = THURSDAY;
				}
				else if (day_t == "FRIDAY") {
					day = FRIDAY;
				}
				else if (day_t == "SATURDAY") {
					day = SATURDAY;
				}
				else {
					day = SUNDAY;

				}
				if (session_t == "MORNING") {
					session = MORNING;
				}
				else if (session_t == "AFTERNOON") {
					session = AFTERNOON;
				}
				else if (session_t == "EVENING") {
					session = EVENING;
				}
				else
				{
					session = REST;
				}
				it->setShift(day, session);
			}
		}
		std::cout << "1. Set the employee other" << std::endl;
		std::cout << "0. Exit" << std::endl;
		std::cin >> count;
	}
}
/*
* Function: printShift
* Description: This function print the shift of employee
* Input:
*   list<Employee>& employee
* Output:
*
*/
void printShift(std::list<Employee> employee) {
	std::cout << "Shifts of employee: " << std::endl;
	for (auto x : employee) {
		std::cout << "NAME: " << x.getName() << std::endl;
		x.getShift();
	}
}

/*
* Function: addRoom
* Description: This function add a room
* Input:
*   list<Room>& room
* Output:
*
*/
void addRoom(std::list<Room>& room) {
	int number;
	
	int count = 1;
	while (count == 1)
	{
		std::cout << "Enter number room: " << std::endl;
		std::cin >> number;
		Room temp(number);
		room.push_back(temp);
		std::cout << "1. Add the room another" << std::endl;
		std::cout << "2. Exit" << std::endl;
		std::cin >> count;
	}
}
/*
* Function: deleteRoom
* Description: This function delete a room
* Input:
*   list<Room>& room
* Output:
*
*/
void deleteRoom(std::list<Room>& room) {
	int number;
	int count = 1;
	while (count ==1)
	{
		std::cout << "Number room: " << std::endl;
		std::cin >> number;
		for (std::list<Room>::iterator it = room.begin(); it != room.end(); ++it) {
			if (it->getNumberRoom() == number) {
				room.erase(it);
				std::cout << "Deleted!!" << std::endl;
				std::cout << "0. Exit" << std::endl;
				std::cin >> count;
				break;
			}
		}
	}
	
}
/*
* Function: checkRoom
* Description: This function check status rooms
* Input:
*   list<Room>& room
* Output:
*
*/
void checkRoom(std::list<Room> room) {
	//std::string status_t;
	int number;
	int count;
	for (auto x : room) {
		std::cout << "Number room: " << x.getNumberRoom() << std::endl;
		
		std::cout << "Status: " << x.checkStatus() << std::endl;

	}
	std::cout << "1. Check information room" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cin >> count;
	while (count == 1) {
		std::cout << "Number room : ";
		std::cin >> number;
		for (auto x : room) {
			if (number == x.getNumberRoom()) {
				std::cout << "Information Guest:" << std::endl;
				std::cout << "Name: " << x.getName() << std::endl;
				std::cout << "Number Phone: " << x.getNumberPhone() << std::endl;
				std::cout << "Check in: " << x.getCheckIn() << std::endl;
				std::cout << "Check out: " << x.getCheckOut() << std::endl;
				//std::cout << "Feedback: " << x.getFeedBack() << std::endl;
				std::cout << "0. Exit" << std::endl;
				std::cin >> count;
				break;
			}
		}
	}
	
}
/*
* Function: service
* Description: This function print the service
* Input:
*   
* Output:
*
*/
void service() {
	int count;
	std::cout << "1. Food and Drink" << std::endl;
	std::cout << "2. Pool" << std::endl;
	std::cout << "3. Gym" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cout << "Choice: ";
	std::cin >> count;
	switch (count)
	{
	case 1:
		std::cout << "UNVAILABLE" << std::endl;
		break;
	case 2:
		std::cout << "UNVAILABLE" << std::endl;
		break;
	case 3:
		std::cout << "UNVAILABLE" << std::endl;
		break;
	case 0:
		break;
	default:
		break;
	}
}