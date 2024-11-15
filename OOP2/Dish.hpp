#ifndef _Dish_HPP_
#define _Dish_HPP_
#include<string>
class Dish {
public:
	Dish(std::string names, long long prices) :
		name(names), price(prices), volume(1) {
		static int id = 200;
		ID = id;
		id++;
	}
	std::string getName();
	long long getPrice();
	int getID();
	int getVolume();
	void setVolume(int volume);
private:
	int ID;
	std::string name;
	long long price;
	int volume;
};
#endif // !_Dish_HPP_
