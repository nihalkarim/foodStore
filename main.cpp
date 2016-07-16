#include "classes/Food.h"
#include "classes/Order.h"
#include <iostream>
#include <string>


using namespace std;
using namespace food;

int main()
{
	map<int, string> menu;
	menu[1] = "waffles";
	menu[2] = "pancakes";
	menu[3] = "pizza";
	menu[4] = "fries";
	menu[5] = "burger";
	menu[6] = "cheeseburger";
	menu[7] = "pie";
	menu[8] = "cake";
	menu[9] = "brownie";
	menu[10] = "cookie";
	menu[11] = "lasagna";
	menu[12] = "pepespecial";

	Order ordering;

	cout << "Welcome to 'The Rarest Pepe' What would you like to order today? (choose a #) \n" << endl; 

	map<int, string>::iterator it;

	for (it = menu.begin(); it != menu.end(); it++) {
	/*for (auto const& m : menu) { for C++ 11 and 
		std::cout << m.first << ") " << m.second << '\n'; */
	    std::cout << it->first << ") " << it->second << '\n';
	}


	while(true) {

		int food;
		string size;

		cin >> food;
		if(food != 0                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                )
		{

			cout << "What size? (s)mall, (m)edium or (l)arge?" << endl;
			cin >> size;

			ordering.orderA(nameToSize(size), menu[food]);

		}  else {

			cout << "Thank you!" << endl;
			break;

		}

		cout << "What else would you like to order? Select or type 'q' to complete." << endl; 
		
	}

	


	 //FoodFactory starbucks;
	 //Food *cake = starbucks.getFood("cake", SMALL);
	 //Food *pizza = starbucks.getFood("pizza", LARGE);
	ordering.receipt();

	return 0; 
}