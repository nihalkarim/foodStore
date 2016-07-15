#include "Pizza.h"
#include "Food.h"

namespace food {

	Pizza::Pizza (Size size):Food(size) {
		name = "pizza";
		calories[SMALL] = 100;
		calories[MEDIUM] = 150;
		calories[LARGE] = 200;
		cout << "ordering: " << getSizeName(size) << " pizza..." << endl;
	}

	float Pizza::getPrice() {

		float price;
		Size pizzaSize = getSize();

		switch(pizzaSize) {
			case SMALL:
							price = 1.75;
			break;

			case MEDIUM:
							price = 2.95;
			break;

			case LARGE:
							price = 4.25;
			break;

			default:
				price = 0;
			}

		return price;
	}
}