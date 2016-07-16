#include "Cake.h"
#include "Food.h"

namespace food {

	Cake::Cake (Size size):Food(size) {
		name = "brownie";
		calories[SMALL] = 90;
		calories[MEDIUM] = 105;
		calories[LARGE] = 120;
		cout << "ordering: " << getSizeName(size) << " cake..." << endl;
	}
		float Cake::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 0.75;
			break;

			case MEDIUM:
							price = 1.10;
			break;

			case LARGE:
							price = 1.90;
			break;

			default:
				price = 0;

		}

		return price;
	}

}