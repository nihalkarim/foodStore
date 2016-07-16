#ifndef BURGER_H
#define BURGER_H
#include "Food.h"

namespace food {

	class Burger : public Food {

		public:
			Burger (Size size);
			float getPrice();

	};

}

#endif