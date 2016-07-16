#ifndef ORDER_H
#define ORDER_H
#include <vector>
#include "Food.h"

namespace food {

	class Order {
			public:
				vector <Food*> orderedItems; 
				void orderA(Size size, string name);
				void receipt();

	};

}

#endif