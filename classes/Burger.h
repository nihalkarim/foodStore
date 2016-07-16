#ifndef BURGER_H
#define BURGER_H
#include "Food.h"

namespace food {

	class Burger : public Food {

		public:
			Burger (Size);
			float getPrice();
			int getCalories();
		private:

	};

}

#endif
	