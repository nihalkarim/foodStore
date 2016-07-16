#include "Burger.h"
#include "Food.h"

namespace food {

	Burger::Burger (Size size):Food(size) {

		name = "brownie";
		calories[SMALL] = 150;
		calories[MEDIUM] = 210;
		calories[LARGE] = 300;
		cout << "ordering: " << getSizeName(size) << " burger..." << endl;
	}
		float Burger::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 1.75;
			break;

			case MEDIUM:
							price = 2.70;
			break;

			case LARGE:
							price = 4.95;
			break;

			default:
				price = 0;

		}

		return price;
	}

}
