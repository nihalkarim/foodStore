#ifndef PEPESPECIAL_H
#define PEPESPECIAL_H
#include "Food.h"

namespace food {

class PepeSpecial : public Food {

		public:
			PepeSpecial (Size);
			float getPrice();
			int getCalories();
		private:
			
	};
}
#endif