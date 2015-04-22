/*
 * Patty.cpp
 *
 *  Created on: Jan 19, 2015
 *      Author: keith
 */

#include "Patty.h"
#include <string>
#include <iostream>
using namespace std;

Patty::Patty() {
	meat = "beef";
	supplier = "Harris Ranch";
	weight = 0.125;
	frozen = false;
}

Patty::~Patty() {
	cout << "Destroying this patty" << endl;
}

string Patty::getMeat(){ return meat; }
string Patty::getSupplier(){ return supplier; }
double Patty::getWeight(){ return weight; }
bool Patty::isFrozen(){ return frozen; }
