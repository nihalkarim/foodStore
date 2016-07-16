#ifndef BROWNIE_H
#define BROWNIE_H
#include "Food.h"

namespace food {
	
class Brownie : public Food {

		public:
			Brownie (Size);
			float getPrice();
			int getCalories();
		private:
			
	};
}
#endif
