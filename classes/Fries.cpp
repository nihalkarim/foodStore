#include "Fries.h"
#include "Food.h"

namespace food {

	Fries::Fries (Size size):Food(size) {
		name = "fries";
		calories[SMALL] = 80;
		calories[MEDIUM] = 100;
		calories[LARGE] = 130;
		cout << "ordering: " << getSizeName(size) << " fries..." << endl;
	}

	float Fries::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 1.00;
			break;

			case MEDIUM:
							price = 2.25;
			break;

			case LARGE:
							price = 3.50;
			break;

			default:
				price = 0;

		}

		return price;
	}

}