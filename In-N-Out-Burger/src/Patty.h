/*
 * Patty.h
 *
 *  Created on: Jan 19, 2015
 *      Author: keith
 */

#ifndef PATTY_H_
#define PATTY_H_
#include <string>

class Patty {
	std::string meat, supplier;
	double weight;
	bool frozen;
public:
	Patty();
	~Patty();
	std::string getMeat(void);
	std::string getSupplier();
	double getWeight();
	bool isFrozen();
};

#endif /* PATTY_H_ */
