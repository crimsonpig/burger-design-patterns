/*
 * MenuItem.cpp
 *
 *  Created on: Apr 21, 2015
 *      Author: keith
 */

#include "MenuItem.h"

MenuItem::MenuItem(std::string name, std::string description) : FoodItem(name, description) {
	price = 0.00;
}

MenuItem::MenuItem(std::string name, std::string description, double newPrice) : FoodItem(name, description) {
	price = newPrice;
}

MenuItem::~MenuItem() {
	// TODO Auto-generated destructor stub
}

void MenuItem::setPrice(double newPrice){
	price = newPrice;
}

double MenuItem::getPrice(){
	return price;
}


