#include "Cheeseburger.h"
#include "Food.h"

namespace food {

	Cheeseburger::Cheeseburger (Size size):Food(size) {
		name = "cheeseburger";
		calories[SMALL] = 160;
		calories[MEDIUM] = 220;
		calories[LARGE] = 280;
		cout << "ordering: " << getSizeName(size) << " cheeseburger..." << endl;
	}
	
	float Cheeseburger::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 1.85;
			break;

			case MEDIUM:
							price = 3.00;
			break;

			case LARGE:
							price = 3.65;
			break;

			default:
				price = 0;
			}

		return price;
	}
}
