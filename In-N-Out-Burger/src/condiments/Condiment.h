/*
 * Condiment.h
 *
 *  Created on: Apr 15, 2015
 *      Author: crimsonpig
 */

#ifndef CONDIMENT_H_
#define CONDIMENT_H_

#include "../FoodItem.h"

class Condiment: public FoodItem {
protected:
	Condiment(std::string name, std::string description);
public:
	~Condiment();
	void printInfo();
};

#endif /* CONDIMENT_H_ */
