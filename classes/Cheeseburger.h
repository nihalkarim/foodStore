#ifndef CHEESEBURGER_H
#define CHEESEBURGER_H
#include "Food.h"

namespace food {

	class Cheeseburger : public Food {

		public:
			Cheeseburger (Size);
			float getPrice();
			int getCalories();
		private:

	};

}

#endif
	