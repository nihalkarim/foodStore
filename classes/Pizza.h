#ifndef PIZZA_H
#define PIZZA_H
#include "Food.h"

namespace food {
	
class Pizza : public Food {

		public:
			Pizza (Size);
			float getPrice();
			int getCalories();
		private:
			
	};
}
#endif