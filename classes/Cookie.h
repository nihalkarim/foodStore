#ifndef COOKIE_H
#define COOKIE_H
#include "Food.h"

namespace food {
	
	class Cookie : public Food {

		public:
			Cookie (Size size);
			float getPrice();

	};

}

#endif