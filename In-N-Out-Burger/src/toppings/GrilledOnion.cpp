/*
 * GrilledOnion.cpp
 *
 *  Created on: Jan 19, 2015
 *      Author: crimsonpig
 */

#include "GrilledOnion.h"
#include "../FoodItemGriller.h"
#include "Onion.h"
#include <iostream>

GrilledOnion::GrilledOnion(): FoodItemGriller(new Onion()) {
	// TODO Auto-generated constructor stub

}

GrilledOnion::~GrilledOnion() {
	std::cout << "Destroying this grilled onion" << std::endl;
}
