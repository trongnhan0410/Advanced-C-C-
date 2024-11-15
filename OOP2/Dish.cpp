#include"Dish.hpp"
/*
* Function: getID
* Description: This function get ID of dishes
* Input:

* Output:
* a: a integer value
*/
int Dish::getID() {
	return ID;
}
/*
* Function: getName
* Description: This function get name of dishes
* Input:

* Output:
* a: a string value
*/
std::string Dish::getName() {
	return name;
}
/*
* Function: getPrice
* Description: This function get price of dishes
* Input:

* Output:
* a: a long long value
*/
long long Dish::getPrice() {
	return price;
}
/*
* Function: getVolume
* Description: This function get volume of dishes
* Input:

* Output:
* a: a integer value
*/
int Dish::getVolume() {
	return volume;
}
/*
* Function: setVolume
* Description: This function set volume of dishes
* Input:
  a: a integer value
* Output:
* 
*/
void Dish::setVolume(int number) {
	volume = number;
}