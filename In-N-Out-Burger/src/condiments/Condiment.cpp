/*
 * Condiment.cpp
 *
 *  Created on: Apr 15, 2015
 *      Author: crimsonpig
 */

#include "Condiment.h"
#include <iostream>

Condiment::Condiment(std::string name, std::string description): FoodItem(name, description) {
	// TODO Auto-generated constructor stub

}

Condiment::~Condiment() {
	std::cout << "Destroying this condiment" << std::endl;
}

void Condiment::printInfo() {
	std::cout << "Condiment info: Name = " << getName() << ", Description = " << getDescription() << std::endl;
}

