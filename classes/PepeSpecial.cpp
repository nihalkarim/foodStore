#include "PepeSpecial.h"
#include "Food.h"

namespace food {

	PepeSpecial::PepeSpecial (Size size):Food(size) {
		name = "pepespecial";
		calories[SMALL] = 140;
		calories[MEDIUM] = 200;
		calories[LARGE] = 290;
		cout << "ordering: " << getSizeName(size) << " pepespecial..." << endl;
	}
	
	float PepeSpecial::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 10.46;
			break;

			case MEDIUM:
							price = 19.99;
			break;

			case LARGE:
							price = 35.94;
			break;

			default:
				price = 0;
			}

		return price;
	}
}