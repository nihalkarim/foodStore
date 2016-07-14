#ifndef PANCAKES_H
#define PANCAKES_H
#include "Food.h"

namespace food {
	
	class Pancakes : public Food {

		public:
			Pancakes (Size size);
			float getPrice();

	};

}

#endif // PANCAKES_H