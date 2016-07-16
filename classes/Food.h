#ifndef FOOD_H
#define FOOD_H
#include <iostream>
#include <vector>
#include <map>
using namespace std;

namespace food {
	
	enum Size {
		SMALL,
		MEDIUM,
		LARGE
	};


	string getSizeName(Size size);
	Size nameToSize(string size);


	class Food {
		public:
			Food (Size);
			virtual float getPrice() = 0;
		    Size getSize() { return size; };
		    string name;
		    map<Size, int> calories;
		    
		private:
			Size size;
	};
	


	class Cheeseburger : public Food {

		public:
			Cheeseburger (Size size);
			float getPrice();

	};

	class Cake : public Food {

		public:
			Cake (Size size);
			float getPrice();
		

	};

	class Brownie : public Food {

		public:
			Brownie (Size size);
			float getPrice();

	};

	class Cookie : public Food {

		public:
			Cookie (Size size);
			float getPrice();

	};
	

}

#endif