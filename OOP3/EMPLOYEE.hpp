#ifndef _EMPLOYEE_HPP_
#define _EMPLOYEE_HPP_
#include<string>
#include"ROOM.hpp"
#include<vector>
#include<list>
typedef enum {
	MORNING,
	AFTERNOON,
	EVENING,
	REST
}Session;
typedef enum {
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY
}Day;
class Shift {
private:
	Session session;
	Day day;
public:
	Shift(Day day, Session session) : day(day), session(session) {}
	void getSession();
	void getDay();
};

class Employee {
private:
	int ID;
	std::string name;
	int numberPhone;
	std::vector<Shift> shift;
	//Shift shift;
	std::string position;
public:
	Employee(std::string name, int number, std::string position) :
		name(name), numberPhone(number), position(position) {
		static int id = 200;
		ID = id;
		id++;
	}
	std::string getName();
	int getNumberPhone();
	std::string getPosition();
	int getID();
	void getShift();
	void setShift(Day day, Session session);
};
void checkShift(std::list<Employee> employee);
void editInformaiton(std::list<Employee>& employee);
void reservatinon(std::list<Room>& room);
void returnRoom(std::list<Room>& room);
void printStatusRoom(std::list<Room> room);
#endif // !_EMPLOYEE_HPP_
