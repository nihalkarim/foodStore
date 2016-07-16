#include "Lasagna.h"
#include "Food.h"

namespace food {

	 Lasagna::Lasagna (Size size):Food(size) {
		name = "lasagna";
		calories[SMALL] = 210;
		calories[MEDIUM] = 280;
		calories[LARGE] = 400;
		cout << "ordering: " << getSizeName(size) << " lasagna..." << endl;
	}
	
	float Lasagna::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 2.15;
			break;

			case MEDIUM:
							price = 3.35;
			break;

			case LARGE:
							price = 4.05;
			break;

			default:
				price = 0;
			}

		return price;
	}
}

