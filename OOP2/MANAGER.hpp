#ifndef _MANAGER_HPP_
#define _MANAGER_HPP_
#include <string>
#include<vector>
#include"EMPLOYEE.hpp"
#include"Dish.hpp"

void setup_table(std::vector<Table>& database, std::vector<Dish> menu);
void add_dish(std::vector<Dish>& menu);
void edit_dish(std::vector<Dish>& menu);
void delete_dish(std::vector<Dish>& menu);
void print_dish(std::vector<Dish> menu);

#endif // !_MANAGER_HPP_