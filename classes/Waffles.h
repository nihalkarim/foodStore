#ifndef WAFFLES_H
#define WAFFLES_H
#include "Food.h"

namespace food {

class Waffles : public Food {

		public:
			Waffles (Size);
			float getPrice();
			int getCalories();
		private:
			
	};
}
#endif