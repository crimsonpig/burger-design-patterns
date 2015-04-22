/*
 * Ketchup.cpp
 *
 *  Created on: Apr 15, 2015
 *      Author: crimsonpig
 */

#include "Ketchup.h"
#include <iostream>

Ketchup::Ketchup(): Condiment("ketchup", "red heinz ketchup") {
	// TODO Auto-generated constructor stub

}

Ketchup::~Ketchup() {
	std::cout << "Destroying this ketchup " << std::endl;
}

