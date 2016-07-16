#include "Fries.h"
#include "Food.h"

namespace food {

	Burger::Burger (Size size):Food(size) {
			name = "burger";
			calories[SMALL] = 150;
			calories[MEDIUM] = 210;
			calories[LARGE] = 270;
			cout << "ordering: " << getSizeName(size) << " burger..." << endl;
		}

	float Burger::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 1.55;
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
