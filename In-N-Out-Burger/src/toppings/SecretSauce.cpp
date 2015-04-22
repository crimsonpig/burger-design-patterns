/*
 * SecretSauce.cpp
 *
 *  Created on: Apr 15, 2015
 *      Author: crimsonpig
 */

#include "SecretSauce.h"
#include <iostream>

SecretSauce::SecretSauce(): Topping("secret sauce", "ingredients are classified") {
	// TODO Auto-generated constructor stub

}

SecretSauce::~SecretSauce() {
	std::cout << "Destroying this secret sauce" << std::endl;
}

