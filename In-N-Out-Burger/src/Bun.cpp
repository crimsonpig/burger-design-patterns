/*
 * Bun.cpp
 *
 *  Created on: Jan 18, 2015
 *      Author: crimsonpig
 */
#include <string>
using namespace std;

class Bun {
	private:
		string ingredients;
	public:
		Bun(){
			ingredients = "sponge dough";
		}
		~Bun(){

		}
		string getIngredients(){
			return ingredients;
		}
};



