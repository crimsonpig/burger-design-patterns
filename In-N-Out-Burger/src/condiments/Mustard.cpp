/*
 * Mustard.cpp
 *
 *  Created on: Apr 15, 2015
 *      Author: keith
 */

#include "Mustard.h"
#include <iostream>

Mustard::Mustard(): Condiment("mustard", "yellow mustard") {
	// TODO Auto-generated constructor stub

}

Mustard::~Mustard() {
	std::cout << "Destroying this mustard" << std::endl;
}

