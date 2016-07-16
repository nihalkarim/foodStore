#include "Brownie.h"
#include "Food.h"

namespace food {

	Brownie::Brownie (Size size):Food(size) {
		name = "brownie";
		calories[SMALL] = 90;
		calories[MEDIUM] = 105;
		calories[LARGE] = 120;
		cout << "ordering: " << getSizeName(size) << " brownie..." << endl;
	}
		float Brownie::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 1.00;
			break;

			case MEDIUM:
							price = 1.50;
			break;

			case LARGE:
							price = 2.10;
			break;

			default:
				price = 0;

		}

		return price;
	}

}