#include "Pie.h"
#include "Food.h"

namespace food {

	Pie::Pie (Size size):Food(size) {
		name = "pie";
		calories[SMALL] = 130;
		calories[MEDIUM] = 180;
		calories[LARGE] = 210;
		cout << "ordering: " << getSizeName(size) << " pie..." << endl;
}
		
	float Pie::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize)
		{
			case SMALL:
							price = 1.75;
			break;

			case MEDIUM:
							price = 2.85;
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