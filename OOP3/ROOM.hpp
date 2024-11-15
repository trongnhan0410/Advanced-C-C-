#ifndef _ROOM_HPP_
#define _ROOM_HPP_
#include<string>
typedef enum {
	UNVAILABLE,
	VAILABLE
}Status;
/*class Client {
private:
	std::string nameGuest;
	int numberPhoneGuest;
public:
	
	std::string getName();
	int getNumberPhone();
};*/
class Room {
private:
	std::string nameGuest;
	int numberPhoneGuest;
	//int quantity;
	//Client client;
	Status status;
	int numberRoom;
	int checkIn;
	int checkOut;
	//std::string feedBack;
	int bill;
	//int time;
public:
	Room(int numberRoom) :
		numberRoom(numberRoom) {
		status = VAILABLE;
		bill = 60000;
	}
	std::string checkStatus();
	std::string getName();
	int getNumberRoom();
	//int getQuantity();
	//std::string getFeedBack();
	void setCheckIn(int day);
	void setCheckOut(int day);
	int getNumberPhone();
	//std::string getFeedBack();
	int getCheckIn();
	int getCheckOut();
	void setName(std::string name);
	void setNumberPhone(int number);
	int getBill();
	void changeStatus();
};
#endif // !_ROOM_HPP_
