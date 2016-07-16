#ifndef CAKE_H
#define CAKE_H
#include "Food.h"

namespace food {
	
class Cake : public Food {

		public:
			Cake (Size);
			float getPrice();
			int getCalories();
		private:
			
	};
}
#endif
