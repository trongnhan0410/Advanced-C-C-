#ifndef _MANAGER_HPP_
#define _MANAGER_HPP_
#include<list>
#include"EMPLOYEE.hpp"
#include"ROOM.hpp"
void addEmployee(std::list<Employee>& employee);
void editEmployee(std::list<Employee>& employee);
void deleteEmployee(std::list<Employee>& employee);
void setShift(std::list<Employee>& employee);
void printInformation(std::list<Employee> employee);
void printShift(std::list<Employee> employee);

void addRoom(std::list<Room>& room);
void deleteRoom(std::list<Room>& room);
void checkRoom(std::list<Room> room);
void service();
#endif // !_MANAGER_HPP_
