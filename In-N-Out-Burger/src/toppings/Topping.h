/*
 * Topping.h
 *
 *  Created on: Jan 19, 2015
 *      Author: keith
 */

#ifndef TOPPING_H_
#define TOPPING_H_
#include "../FoodItem.h"

class Topping: public FoodItem {
protected:
	Topping(std::string name, std::string description);
public:
	~Topping();
	void printInfo();
};


#endif /* TOPPING_H_ */
