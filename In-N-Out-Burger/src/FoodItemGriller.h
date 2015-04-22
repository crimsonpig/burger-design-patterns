/*
 * FoodItemGriller.h
 *
 *  Created on: Jan 19, 2015
 *      Author: keith
 */

#ifndef FOODITEMGRILLER_H_
#define FOODITEMGRILLER_H_

#include "FoodItem.h"

class FoodItemGriller: public FoodItem {
private:
	FoodItem *grilledItem;
public:
	FoodItemGriller(FoodItem *onion);
	~FoodItemGriller();
	std::string getName();
	std::string getDescription();
	void printInfo();
};

#endif /* FOODITEMGRILLER_H_ */
