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


	class Pancakes : public Food {

		public:
			Pancakes (Size size);
			float getPrice();

	};

	class Pizza : public Food {

		public:
			Pizza (Size size);
			float getPrice();
		private:

	};

	class Fries : public Food {

		public:
			Fries (Size size);
			float getPrice();

	};

	class Burger : public Food {

		public:
			Burger (Size size);
			float getPrice();

	};

	class Cheeseburger : public Food {

		public:
			Cheeseburger (Size size);
			float getPrice();

	};

	class Pie : public Food {

		public:
			Pie (Size size);
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


	class Order {
		public:
			vector <Food*> orderedItems; 
			void orderA(Size size, string name);
			void receipt();


	};

}

#endif