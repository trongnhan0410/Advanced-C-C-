#include <iostream>
#include"STUDENTS.hpp"
using namespace std;
/*
* Function: getName
* Description: This function get name student
* Input:
  
* Output:
* a string value
*/
string Sinhvien::getName() {
	return name;
}
/*
* Function: getID
* Description: This function get ID student
* Input:

* Output:
* a integer value
*/
int Sinhvien::getID() {
	return id;
}
/*
* Function: getRank
* Description: This function get rank student
* Input:

* Output:
* a enum value
*/
Rank Sinhvien::getRank() {
	double average = (score_chemistry + score_math + score_physical) / 3;
	if (average >= 8.5) {
		return EXCELLENT;
	}
	else if (average >= 6.5)
	{
		return GOOD;
	}
	else if (average >= 3.5) {
		return AVERAGE;
	}
	else {
		return WEAK;
	}
}
/*
* Function: getAge
* Description: This function get age student
* Input:

* Output:
* a integer value
*/
int Sinhvien::getAge() {
	return ages;
 }
/*
* Function: getChemistry
* Description: This function score chemistry of student
* Input:

* Output:
* a double value
*/
double Sinhvien::getChemistry() {
	return score_chemistry;
}
/*
* Function: getMath
* Description: This function score Math of student
* Input:

* Output:
* a double value
*/
double Sinhvien::getMath() {
	return score_math;
}
/*
* Function: getPhysical
* Description: This function score Physical of student
* Input:

* Output:
* a double value
*/
double Sinhvien::getPhysical() {
	return score_physical;
}
/*
* Function: getGender
* Description: This function get Gender of student
* Input:

* Output:
* a enum value
*/
Gender Sinhvien::getGender() {
	return gender;
}



