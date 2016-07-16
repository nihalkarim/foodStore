#include "Cookie.h"
#include "Food.h"

namespace food {

	Cookie::Cookie (Size size):Food(size) {
		name = "pancakes";
		calories[SMALL] = 100;
		calories[MEDIUM] = 120;
		calories[LARGE] = 140;
		cout << "ordering: " << getSizeName(size) << " cookie..." << endl;
	}

	float Cookie::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 0.75;
			break;
			case MEDIUM:
							price = 1.25;
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
