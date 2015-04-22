/*
 * Tomato.cpp
 *
 *  Created on: Jan 19, 2015
 *      Author: crimsonpig
 */

#include "Tomato.h"
#include <iostream>
using namespace std;

Tomato::Tomato(): Topping("tomato", "red, juicy tomato") {
	// TODO Auto-generated constructor stub

}

Tomato::~Tomato() {
	cout << "Destroying this tomato" << endl;
}

