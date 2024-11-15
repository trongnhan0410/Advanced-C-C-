#include "STUDENTS_OPERATOR.hpp"
#include "STUDENTS.hpp"
#include <list>
#include <iostream>
#include<algorithm>
using namespace std;
/*
* Function: addStudent
* Description: This function add student
* Input:
list<Sinhvien>& database
* Output:
* 
*/
void addStudent(list<Sinhvien>& database) {
	int id;
	string name;
	int ages;
	Gender gender;
	string gender_t;
	double score_math;
	double score_chemistry;
	double score_physical;
	cout << "Your name: " << endl;
	cin >> name; cin.ignore();
	cout << "Age: " << endl;
	cin >> ages;
	int a;
	do {
		cout << "Gender: " << endl;
		cin >> gender_t;

		if (gender_t == "MALE") {
			gender = MALE;
			a = 1;
		}
		else if (gender_t == "FEMALE") {
			a = 0;
			gender = FEMALE;
		}
	} while (a != 1 && a != 0);

	do {
		cout << "Score Math: " << endl;
		cin >> score_math;
	} while (score_math > 10 && score_math < 0);

	do {
		cout << "Score Physical: " << endl;
		cin >> score_physical;
	} while (score_physical > 10 && score_physical < 0);

	do {
		cout << "Score Chemistry: " << endl;
		cin >> score_chemistry;
	} while (score_chemistry > 10.0 && score_chemistry < 0.0);
	Sinhvien sv(name, ages, gender, score_math, score_chemistry, score_physical);
	database.push_back(sv);
}
/*
* Function: editStudent
* Description: This function edit information student
* Input:
list<Sinhvien>& database
* Output:
* 
*/
void editStudent(list<Sinhvien>& database) {
	string name_temp;
	int choose;
	int ID;
	cout << "Your name: " << endl;
	cin >> name_temp;
	for (auto student : database) {
		if (name_temp == student.getName()) {
			cout << "Student's name: " << name_temp << endl;
			cout << "Student's ID: " << student.getID() << endl;
		}
	}
	cout << "Your ID: " << endl;
	cin >> ID;
	for (auto student : database) {
		if (ID == student.getID()) {
			cout << "Name: " << student.getName() << endl;
			cout << "ID: " << student.getID() << endl;
			cout << "Age: " << student.getAge() << endl;
			cout << "Gender: " << student.getGender() << endl;
			cout << "Score Math: " << student.getMath() << endl;
			cout << "Score Physical: " << student.getPhysical() << endl;
			cout << "Score Chemistry: " << student.getChemistry() << endl;
			cout << "Rank: " << student.getRank() << endl;
			cout << " 1.Edit Name " << endl;
			cout << " 2.Edit Age " << endl;
			cout << " 3.Edit Gender " << endl;
			cout << " 4.Edit Math " << endl;
			cout << " 5.Edit Physical " << endl;
			cout << " 6.Edit Chemistry " << endl;
			cout << " 7.Exit " << endl;
			cout << "Choose: ";
			cin >> choose;

			switch (choose)
			{
			case 1:
				cout << "Name: " << endl;
			case 2:
				cout << "Age: " << endl;

			default:
				break;
			}
		}
	}

}
/*
* Function: deleteStudent
* Description: This function delete  student
* Input:
list<Sinhvien>& database
* Output:
*
*/
void deleteStudent(list<Sinhvien>& database) {
	string name_temp;
	int ID;
	int count = 1;
	while (count == 1)
	{
		cout << "Your name: ";
		cin >> name_temp;
		for (auto student : database) {
			if (name_temp == student.getName()) {
				cout << "Student's name: " << name_temp << endl;
				cout << "Student's ID: " << student.getID() << endl;
			}
		}
		cout << "Your ID: " << endl;
		cin >> ID;
		for (list<Sinhvien>::iterator it = database.begin(); it != database.end(); ++it) {
			if (it->getID() == ID) {
				database.erase(it);
				cout << "Deleted!!!" << endl;
				break;
			}
			else {
				cout << "Not Found ID" << endl;
				break;
			}

		}
		cout << "1. Countinue to delete Students " << endl;
		cout << "2. Exit" << endl;
		cin >> count;

	}

}
/*
* Function: searchStudent
* Description: This function search  student
* Input:
list<Sinhvien>& database
* Output:
* 
*/
void searchStudent(list<Sinhvien>& database) {
	int temp;
	int count = 1;
	string name;
	int id;
	while (count == 1)
	{
		cout << "1. Search by name" << endl;
		cout << "2. Search by ID" << endl;
		cin >> temp;
		if (temp == 1) {
			cout << "Your name: ";
			cin >> name;
			for (auto student : database) {
				if (student.getName() == name) {
					cout << "Name: " << student.getName() << endl;
					cout << "ID: " << student.getID() << endl;
					cout << "Age: " << student.getAge() << endl;
					cout << "Gender: " << student.getGender() << endl;
					cout << "Score Math: " << student.getMath() << endl;
					cout << "Score Physical: " << student.getPhysical() << endl;
					cout << "Score Chemistry: " << student.getChemistry() << endl;
					cout << "Rank: " << student.getRank() << endl;
				}
			}
			cout << "Done search" << endl;
		}
		else if (temp == 2) {
			cout << "Your ID" << endl;
			cin >> id;
			for (auto student : database) {
				if (student.getID() == id) {
					cout << "Name: " << student.getName() << endl;
					cout << "ID: " << student.getID() << endl;
					cout << "Age: " << student.getAge() << endl;
					cout << "Gender: " << student.getGender() << endl;
					cout << "Score Math: " << student.getMath() << endl;
					cout << "Score Physical: " << student.getPhysical() << endl;
					cout << "Score Chemistry: " << student.getChemistry() << endl;
					cout << "Rank: " << student.getRank() << endl;
				}
			}
			cout << "Done search" << endl;
		}
		else
		{
			cout << "Error" << endl;
		}
		cout << "1. Countinue to search Students " << endl;
		cout << "2. Exit" << endl;
		cin >> count;
	}
}
/*
* Function: printStudent
* Description: This function print ìnormaiton  student
* Input:
list<Sinhvien>& database
* Output:
* 
*/
void printStudent( list<Sinhvien> database) {
	int choose;
	for (auto student : database)
	{
		cout << "Name: " << student.getName() << endl;
		cout << "ID: " << student.getID() << endl;
		cout << "Age: " << student.getAge() << endl;
		cout << "Gender: " << student.getGender() << endl;
		cout << "Score Math: " << student.getMath() << endl;
		cout << "Score Physical: " << student.getPhysical() << endl;
		cout << "Score Chemistry: " << student.getChemistry() << endl;
		cout << "Rank: " << student.getRank() << endl;
	}
	cout << "0.Exit" << endl;
	cout << "Choose: ";
	cin >> choose;
}
/*
* Function: saveStudent
* Description: This function save student to file csv
* Input:
list<Sinhvien>& database
* Output:
*
*/
void saveStudent(list<Sinhvien>& database) {
	FILE* file;
	fopen_s(&file, "database_sv", "a");
	if (file == NULL) {
		cout << "Cant open file" << endl;
	}
	for (list<Sinhvien>::iterator it = database.begin(); it != database.end(); ++it) {
		fprintf(file, "%s %d %d %lf %lf %lf ", it->getName(), it->getID(), it->getAge(), it->getMath(), it->getPhysical(), it->getChemistry());
		if (it->getGender() == MALE)
		{
			fputs(" MALE ", file);
		}
		else {
			fputs(" FEMALE", file);
		}
		if (it->getRank() == EXCELLENT) {
			fputs(" EXCELLENT\n", file);
		}
		else if (it->getRank() == GOOD)
		{
			fputs(" GOOD\n", file);
		}
		else if (it->getRank() == AVERAGE)
		{
			fputs(" AVERAGE\n", file);
		}
		else
		{
			fputs(" WEAK\n", file);
		}

	}
	fclose(file);
}
void sortStudent(list<Sinhvien>& database) {
	
	database.sort([]( Sinhvien& a,  Sinhvien& b) { return a.getName() < b.getName(); });
	for (auto student : database)
	{
		cout << "Name: " << student.getName() << endl;
		cout << "ID: " << student.getID() << endl;
		cout << "Age: " << student.getAge() << endl;
		cout << "Gender: " << student.getGender() << endl;
		cout << "Score Math: " << student.getMath() << endl;
		cout << "Score Physical: " << student.getPhysical() << endl;
		cout << "Score Chemistry: " << student.getChemistry() << endl;
		cout << "Rank: " << student.getRank() << endl;
	}
}