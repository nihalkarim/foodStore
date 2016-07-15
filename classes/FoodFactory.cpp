#include "FoodFactory.h"
#include "Food.h"
#include "Waffles.h"
#include "Lasagna.h"
#include "PepeSpecial.h"
#include "Pancakes.h"
#include "Pizza.h"
#include "Pie.h"

namespace food {

	Food *FoodFactory::getFood(Size size, string name) {

		if(name.empty()) {
			return NULL;
		}

		if(name == "waffles") {
			return new Waffles(size);
		} 

		else if(name == "pancakes") {
			return new Pancakes(size);
		}

		else if(name == "pizza") {
			return new Pizza(size);
		}

		else if(name == "fries") {
			return new Fries(size);
		}

		else if(name == "burger") {
			return new Burger(size);
		}

		else if(name == "cheeseburger") {
			return new Cheeseburger(size);
		}

		else if(name == "pie") {
			return new Pie(size);
		}

		else if(name == "cake") {
			return new Cake(size);
		}

		else if(name == "brownie") {
			return new Brownie(size);
		}

		else if(name == "cookie") {
			return new Cookie(size);
		}

		else if(name == "lasagna"){
			return new Lasagna(size);
		}

		else if(name == "pepespecial"){
			return new PepeSpecial(size);
		}

		return NULL;

	}

}