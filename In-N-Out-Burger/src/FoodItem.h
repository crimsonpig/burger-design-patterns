/*
 * FoodItem.h
 *
 *  Created on: Apr 15, 2015
 *      Author: keith
 */

#ifndef FOODITEM_H_
#define FOODITEM_H_
#include <string>

class FoodItem {
private:
	std::string name, description;
protected:
	FoodItem(std::string name, std::string description);
public:
	~FoodItem();
	std::string getName();
	std::string getDescription();
	void printInfo();
};

#endif /* FOODITEM_H_ */
