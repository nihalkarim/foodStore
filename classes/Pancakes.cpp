#include "Pancakes.h"
#include "Food.h"

namespace food {

	Pancakes::Pancakes (Size size):Food(size) {
		name = "pancakes";
		calories[SMALL] = 170;
		calories[MEDIUM] = 220;
		calories[LARGE] = 290;
		cout << "ordering: " << getSizeName(size) << " pancakes..." << endl;
	}

	float Pancakes::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 1.75;
			break;
			case MEDIUM:
							price = 2.25;
			break;
			case LARGE:
							price = 3.75;
			break;
			default:
				price = 0;

		}

		return price;
	}
	
} // food
