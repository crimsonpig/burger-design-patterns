/*
 * MenuItem.h
 *
 *  Created on: Apr 21, 2015
 *      Author: keith
 */

#ifndef MENUITEM_H_
#define MENUITEM_H_

#include "FoodItem.h"

class MenuItem: public FoodItem {
private:
	double price;
protected:
	MenuItem(std::string name, std::string description);
	MenuItem(std::string name, std::string description, double price);
public:
	~MenuItem();
	double getPrice();
	void setPrice(double newPrice);
};

#endif /* MENUITEM_H_ */
