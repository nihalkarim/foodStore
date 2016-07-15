#ifndef PIE_H
#define PIE_H
#include "Food.h"

namespace food {

	class Pie : public Food {

		public:
			Pie (Size);
			float getPrice();
			int getCalories();
		private:

	};

}

#endif
	