/*
 * FoodItemGriller.cpp
 *
 *  Created on: Jan 19, 2015
 *      Author: keith
 */

#include "FoodItemGriller.h"
#include <string>
#include <iostream>
using namespace std;

FoodItemGriller::FoodItemGriller(FoodItem *decorated): FoodItem(decorated->getName(), decorated->getDescription()) {
	grilledItem = decorated;
}

FoodItemGriller::~FoodItemGriller() {
	delete grilledItem;
}

string FoodItemGriller::getName() {
	return "grilled " + grilledItem->getName();
}

string FoodItemGriller::getDescription() {
	return "grilled " + grilledItem->getDescription();
}

void FoodItemGriller::printInfo() {
	cout << "Grilled item info: Name = " << getName() << ", Description = " << getDescription() << endl;
}
