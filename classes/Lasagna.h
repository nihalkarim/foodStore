#ifndef LASAGNA_H
#define LASAGNA_H
#include "Food.h"

namespace food {

class Lasagna: public Food {

		public:
			Lasagna (Size);
			float getPrice();
			int getCalories();
		private:
			
	};
}
#endif