#include"EMPLOYEE.hpp"
#include"ROOM.hpp"
#include<string>
#include<iostream>
/*
* Function: getSession
* Description: This function get Session of dáy
* Input:
*
* Output:
* 
*/
void Shift::getSession() {
	if (session == MORNING) {
		std::cout<<"MORNING"<<std::endl;
	}
	else if (session == AFTERNOON) {
		std::cout << "AFTERNOON" << std::endl;
	}
	else if (session == EVENING) {
		std::cout << "EVENING" << std::endl;
	}
	else
	{
		std::cout << "REST" << std::endl;
	}
}
/*
* Function: getDay
* Description: This function get day
* Input:
*
* Output:
*
*/
void Shift::getDay() {
	if (day == MONDAY) {
		std::cout << "MONDAY: ";
	}else if (day == TUESDAY) {
		std::cout << "TUESDAY: ";
	}
	else if (day == WEDNESDAY) {
		std::cout << "WEDNESDAY: ";
	}
	else if (day == THURSDAY) {
		std::cout << "THURSDAY: ";
	}
	else if (day == FRIDAY) {
		std::cout << "FRIDAY: ";
	}
	else if (day == SATURDAY) {
		std::cout << "SATURDAY: ";
	}
	else {
		std::cout << "SUNDAY: ";

	}
}
/*
* Function: getName
* Description: This function get name of employees
* Input:
*
* Output:
* a: a string value
*/
std::string Employee::getName() {
	return name;
}
/*
* Function: getID
* Description: This function get ID of employees
* Input:
*
* Output:
* a: a integer value
*/
int Employee::getID() {
	return ID;
}
/*
* Function: getNumberPhone
* Description: This function get number phone of employees
* Input:
*
* Output:
* a: a integer value
*/
int Employee::getNumberPhone() {
	return numberPhone;
}
/*
* Function: getPosition
* Description: This function get position of employees
* Input:
*
* Output:
* a: a string value
*/
std::string Employee::getPosition() {
	return position;
}
/*
* Function: getShift
* Description: This function get shift of employees
* Input:
*
* Output:
* 
*/
void Employee::getShift() {
	for (auto x : shift) {
		x.getDay();
		x.getSession();
	}
}
/*
* Function: setShift
* Description: This function set shift of employees
* Input:
* a: a class value
* b: a class value
* Output:
*
*/
void Employee::setShift(Day day, Session session) {
	Shift temp(day, session);
	shift.push_back(temp);
}
/*
* Function: checkShift
* Description: This function check shift of employees
* Input:
* list<Employee> employee
* Output:
*
*/
void checkShift(std::list<Employee> employee) {
	std::string name_t;
	int count = 1;
	while (count==1)
	{
		std::cout << "Your name: ";
		std::cin >> name_t;
		for (auto x : employee) {
			if (name_t == x.getName()) {
				x.getShift();
				break;
			}
		}
		std::cout << "0. Exit" << std::endl;
		std::cin >> count;

	}
}
/*
* Function: editInformaiton
* Description: This function edit Informaiton of employees
* Input:
* list<Employee> employee
* Output:
*
*/
void editInformaiton(std::list<Employee>& employee) {
	std::string name_t;
	int number;
	int count = 1;
	while (count == 1)
	{
		std::cout << "Your name: ";
		std::cin >> name_t;
		for (std::list<Employee>::iterator x = employee.begin(); x != employee.end(); ++x ) {
			if (name_t == x->getName()) {
				std::cout << "Enter number phone that you change: ";
				std::cin >> number;
				Employee temp(name_t, number, x->getPosition());
				employee.erase(x);
				employee.push_back(temp);
				break;
			}
		}
		std::cout << "Change success" << std::endl;
		std::cout << "0. Exit" << std::endl;
		std::cin >> count;

	}
}
/*
* Function: printStatusRoom
* Description: This function check status of room
* Input:
* list<Room> room
* Output:
*
*/
void printStatusRoom(std::list<Room> room) {
	for (auto x : room) {
		std::cout << "Number room: " << x.getNumberRoom() << std::endl;
		std::cout << "Status: " << x.checkStatus() << std::endl;
	}
}
/*
* Function: reservatinon
* Description: This function book a room
* Input:
* list<Room> room
* Output:
*
*/
void reservatinon(std::list<Room>& room) {
	int number;
	int numberPhone;
	std::string name;
	int checkin;
	printStatusRoom(room);
	std::cout << "Enter number room: ";
	std::cin >> number;
	for (std::list<Room>::iterator it = room.begin(); it != room.end(); ++it) {
		if (number == it->getNumberRoom())
		{
			if (it->checkStatus() == "UNVAILABLE") {
				std::cout << "UNVAILABLE" << std::endl;
				break;
			}
			else
			{
				std::cout << "Guest's name: ";
				std::cin >> name;
				it->setName(name);
				std::cout << "Number phone: ";
				std::cin >> numberPhone;
				it->setNumberPhone(numberPhone);
				std::cout << "Day check in: ";
				std::cin >> checkin;
				it->setCheckIn(checkin);
				std::cout << "Success!!" << std::endl;
				it->changeStatus();
				it->setCheckOut(0);
				break;
			}
		}
	}
}
/*
* Function: returnRoom
* Description: This function return a room
* Input:
* list<Room> room
* Output:
*
*/
void returnRoom(std::list<Room>& room) {
	int number;
	int time;
	int checkout;
	int bill;
	std::cout << "Number phone: ";
	std::cin >> number;
	std::cout << "Check out: ";
	std::cin>>checkout;
	std::cout << "Total time: ";
	std::cin >> time;
	for (std::list<Room>::iterator it = room.begin(); it != room.end(); ++it) {
		if (number == it->getNumberPhone()) {
			std::cout << "Name: " << it->getName() << std::endl;
			std::cout << "Number Phone: " << it->getNumberPhone() << std::endl;
			std::cout << "Check in: " << it->getCheckIn() << std::endl;
			it->setCheckOut(checkout);
			std::cout << "Check out: " << it->getCheckOut() << std::endl;
			bill = it->getBill() * time;
			std::cout << "Sum: " << bill << std::endl;
			std::cout << "VAT 10% " << std::endl;
			std::cout << "Total: " << bill + (bill / 10) << std::endl;
			it->changeStatus();
			std::cout << "Success!!!" << std::endl;
			break;
		}
	}
}


