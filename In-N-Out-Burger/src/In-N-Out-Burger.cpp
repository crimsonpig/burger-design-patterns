//============================================================================
// Name        : In-N-Out-Burger.cpp
// Author      : crimsonpig
// Version     :
// Copyright   : In-N-Out is Tasty
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Patty.h"
#include "toppings/Tomato.h"
#include "toppings/Lettuce.h"
#include "toppings/Onion.h"
#include "toppings/GrilledOnion.h"
#include "toppings/Pickle.h"
#include "toppings/SecretSauce.h"
#include "condiments/Condiment.h"
#include "condiments/Ketchup.h"

using namespace std;

int main() {
	//cout << "That's what a hamburger's all about!" << endl; // prints That's what a hamburger's all about!
/*
	cout << "Making the patty" << endl;
	Patty patty;
	cout << "This patty is made of " << patty.getMeat() << " from " << patty.getSupplier() << endl;
	cout << "Making the toppings" << endl;
	cout << "Let's have some lettuce" << endl;
	Lettuce lettuce;
	lettuce.printInfo();
	cout << "Now some tomato" << endl;
	Tomato tomato;
	tomato.printInfo();
	cout << "Add some onion" << endl;
	Onion onion;
	onion.printInfo();
	cout << "How about some grilled onion" << endl;
	GrilledOnion grOnion;
	grOnion.printInfo();
	cout << "You forgot the pickles!" << endl;
	Pickle pickle;
	pickle.printInfo();
	cout << "Secret sauce makes things saucy" << endl;
	SecretSauce sauce;
	sauce.printInfo();
*/
	cout << "Ketchup as condiment. Created on the heap" << endl;
	Condiment *ketchup = new Ketchup();
	ketchup->printInfo();
	delete ketchup;

	return 0;
}
