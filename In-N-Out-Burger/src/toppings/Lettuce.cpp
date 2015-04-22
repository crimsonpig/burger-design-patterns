/*
 * Lettuce.cpp
 *
 *  Created on: Jan 19, 2015
 *      Author: crimsonpig
 */

#include "Lettuce.h"
#include <iostream>

Lettuce::Lettuce(): Topping("lettuce", "green, crunchy lettuce") {
	// TODO Auto-generated constructor stub

}

Lettuce::~Lettuce() {
	std::cout << "Destroying this lettuce " << std::endl;
}
