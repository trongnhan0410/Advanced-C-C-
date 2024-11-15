#include<iostream>
#include"STUDENTS.hpp"
#include"STUDENTS_OPERATOR.hpp"
#include<list>

int main() {
	list<Sinhvien> sv;
	int choose;
	while (1) {
		std::cout << "1. Add Student " << std::endl;
		std::cout << "2.Edit Information Student" << std::endl;
		std::cout << "3.Delete Student" << std::endl;
		std::cout << "4. Search Student" << std::endl;
		std::cout << "5. Sort Student" << std::endl;
		std::cout << "6. Print Student's list" << std::endl;
		std::cout << "7. Save to file csv" << std::endl;
		std::cout << "8. Exit" << std::endl;
		cin >> choose;
		switch (choose)
		{
		case 1:
			addStudent(sv);
			break;
		case 2:
			editStudent(sv);
				break;
		case 3:
			deleteStudent(sv);
			break;
		case 4:
			searchStudent(sv);
			break;
		case 5:
			sortStudent(sv);
			break;
		case 6:
			printStudent(sv);
			break;
		case 7:
			saveStudent(sv);
			break;
		default:
			break;
		}
	}
	
	return 0;
}