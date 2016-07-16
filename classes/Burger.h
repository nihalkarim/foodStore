#ifndef BURGERS_H
#define BURGERS_H

namespace food {

	class Burger : public Food {

		public:
			Burger (Size size);
			float getPrice();

	};

}

#endif