/*
 * Pickle.cpp
 *
 *  Created on: Apr 15, 2015
 *      Author: crimsonpig
 */

#include "Pickle.h"
#include <iostream>

Pickle::Pickle(): Topping("pickle", "sliced crunchy pickle") {
	// TODO Auto-generated constructor stub

}

Pickle::~Pickle() {
	std::cout << "Destroying this pickle" << std::endl;
}

