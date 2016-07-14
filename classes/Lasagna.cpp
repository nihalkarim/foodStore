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
							price = 2.00;
			break;

			case MEDIUM:
							price = 3.25;
			break;

			case LARGE:
							price = 4.00;
			break;

			default:
				price = 0;
			}

		return price;
	}
}