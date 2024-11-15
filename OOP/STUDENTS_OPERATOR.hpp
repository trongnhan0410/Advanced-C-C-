#ifndef _STUDENTS_OPERATOR_HPP_
#define _STUDENTS_OPERATOR_HPP_
#include <list>
#include "STUDENTS.hpp"

void addStudent(list<Sinhvien>& database);
void editStudent(list<Sinhvien>& database);
void deleteStudent(list<Sinhvien>& database);
void searchStudent(list<Sinhvien>& database);
void sortStudent(list<Sinhvien>& database);
void printStudent( list<Sinhvien> database);
void saveStudent(list<Sinhvien>& database);

#endif // !_STUDENTS_OPERATOR_HPP_
