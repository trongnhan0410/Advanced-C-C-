#include"ROOM.hpp"
#include<iostream>
/*
* Function: setName
* Description: This function set name of guests
* Input:
* a : a string value
* Output:
*
*/
void Room::setName(std::string name) {
	nameGuest = name;
}
/*
* Function: setNumberPhone
* Description: This function set number phone of guests
* Input:
* a : a integer  value
* Output:
*
*/
void Room::setNumberPhone(int number) {
	numberPhoneGuest = number;
}
/*
* Function: getCheckIn
* Description: This function get time checkin of guests
* Input:
* 
* Output:
* a : a integer  value
*/
int Room::getCheckIn() {
	return checkIn;
}
/*
* Function: getCheckOut
* Description: This function get time checkout of guests
* Input:
*
* Output:
* a : a integer  value
*/
int Room::getCheckOut() {
	return checkOut;
}
/*
* Function: checkStatus
* Description: This function check status of rooms
* Input:
*
* Output:
* a : a string  value
*/
std::string Room::checkStatus() {
	if (status == UNVAILABLE) {
		return "UNVAILABLE";
	}
	else
	{
		return "VAILABLE";
	}
}
/*
* Function: getName
* Description: This function get name of guests
* Input:
*
* Output:
* a : a string  value
*/
std::string Room::getName() {
	return nameGuest;
}
/*
* Function: getName
* Description: This function get number room of guests
* Input:
*
* Output:
* a : a integer   value
*/
int Room::getNumberRoom() {
	return numberRoom;
}
/*
* Function: getBill
* Description: This function get bill of room 
* Input:
*
* Output:
* a : a integer   value
*/
int Room::getBill() {
	return bill;
}
/*
* Function: changeStatus
* Description: This function change status of room
* Input:
*
* Output:
* 
*/
void Room::changeStatus() {
	if (status == UNVAILABLE) {
		status = VAILABLE;
	}
	else
	{
		status = UNVAILABLE;
	}
}
/*
* Function: setCheckIn
* Description: This function set time checkin of room
* Input:
*a: a integer value
* Output:
*
*/
void Room::setCheckIn(int day) {
	checkIn = day;
}
/*
* Function: setCheckOut
* Description: This function set time checkout of room
* Input:
*a: a integer value
* Output:
*
*/
void Room::setCheckOut(int day) {
	checkOut = day;
}
/*
* Function: getNumberPhone
* Description: This function get number phone of guests
* Input:
*
* Output:
* a: a integer value
*/
int Room::getNumberPhone(){
	return numberPhoneGuest;
}
