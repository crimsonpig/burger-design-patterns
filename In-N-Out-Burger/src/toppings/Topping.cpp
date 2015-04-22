/*
 * Topping.cpp
 *
 *  Created on: Jan 19, 2015
 *      Author: keith
 */

#include "Topping.h"
#include <string>
#include <iostream>

Topping::Topping(std::string name, std::string description) : FoodItem(name, description){

}

Topping::~Topping() {
	std::cout << "Destroying this topping" << std::endl;
}

void Topping::printInfo(){
	std::cout << "Topping info: Name = " << getName() << ", Description = " << getDescription() << std::endl;
}
