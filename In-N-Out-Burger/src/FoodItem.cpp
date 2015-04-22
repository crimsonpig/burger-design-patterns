/*
 * FoodItem.cpp
 *
 *  Created on: Apr 15, 2015
 *      Author: keith
 */

#include "FoodItem.h"
#include <string>
#include <iostream>

FoodItem::FoodItem(std::string name, std::string description) {
	this->name = name;
	this->description = description;
}

FoodItem::~FoodItem() {
	std::cout << "Destroying this food item" << std::endl;
}

std::string FoodItem::getName(){
	return name;
}

std::string FoodItem::getDescription(){
	return description;
}

void FoodItem::printInfo(){
	std::cout << "Food item info: Name = " << getName() << ", Description = " << getDescription() << std::endl;
}
