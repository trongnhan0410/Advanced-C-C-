#ifndef _EMPLOYEE_HPP_
#define _EMPLOYEE_HPP_

//#include "MANAGER.hpp"
#include <vector>
#include"Dish.hpp"
/*
* typedef struct orders {
    Dish dish_orders;
    int volume;
}orders;
*/
typedef enum {
    BUSY,
    FREE
} Status;
class Table {
private:
    int number;
    long long bill;
    std::vector<Dish> menu;
    std::vector<Dish> order;
    Status status;
    //int number_dish;

public:
    Table(std::vector<Dish> menu) : menu(menu),  bill(0), status(FREE) {
        //bill = 0;
        static int number_temp = 1;
        number = number_temp;
        number_temp++;
        //status = FREE;
    }
    void changeStatus();
    Status getStatus();
    int getNumber();
    void setOreder(Dish dish, int number);
    void printOrder();
   // int getNumberDish();
    void cancelDish(int id);
    void chargeTable();
};

void orderFood(std::vector<Table>& database, std::vector<Dish> menu,int number);
void cancelOrder(std::vector<Table>& database,int number);
//void changeOrder(std::vector<Table>& database,int number);
void printOrder(std::vector<Table> database,int number);
void chargeBill(std::vector<Table>& database, int number);
#endif // _EMPLOYEE_HPP_
