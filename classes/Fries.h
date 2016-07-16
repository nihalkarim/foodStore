#ifndef FRIES_H
#define FRIES_H
#include "Food.h"

namespace food {

	class Fries : public Food {

		public:
			Fries (Size size);
			float getPrice();

	};
	
}

#endif


