#include "Waffles.h"
#include "Food.h"

namespace food {

	Waffles::Waffles (Size size):Food(size) {
		name = "waffles";
		calories[SMALL] = 170;
		calories[MEDIUM] = 220;
		calories[LARGE] = 290;
		cout << "ordering: " << getSizeName(size) << " waffles..." << endl;
	}
	
	float Waffles::getPrice() {

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
}
