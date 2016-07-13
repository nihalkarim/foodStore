#ifndef FOODFACTORY_H
#define FOODFACTORY_H
#include "Food.h"

namespace food {

class FoodFactory {
		public:
			Food *getFood(Size size, string name);

	};
}

#endif