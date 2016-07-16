#include "Food.h"
#include "Order.h"
#include <iostream>
using namespace std;

namespace food {

	string getSizeName(Size size) {
		
		string name;

		switch(size) {

			case SMALL:
				name = "s";
				break;

			case MEDIUM:
				name = "m";
				break;

			case LARGE:
				name = "l";
				break;

			default:
				name = "";

		}

		return name;

	}

	Size nameToSize(string size) {

		if(size == "s") {
			return SMALL;
		}

		else if(size == "m") {
			return MEDIUM;

		} 

		else if(size == "l") {
			return LARGE;
		}

	}



	Food::Food(Size newSize) {
		size = newSize;
	}



	Cheeseburger::Cheeseburger (Size size):Food(size) {
		name = "cheeseburger";
		calories[SMALL] = 160;
		calories[MEDIUM] = 220;
		calories[LARGE] = 280;
		cout << "ordering: " << getSizeName(size) << " cheeseburger..." << endl;
	}

	Cake::Cake (Size size):Food(size) {
		name = "cake";
		calories[SMALL] = 145;
		calories[MEDIUM] = 195;
		calories[LARGE] = 225;
		cout << "ordering: " << getSizeName(size) << " cake..." << endl;
	}

	Brownie::Brownie (Size size):Food(size) {
		name = "brownie";
		calories[SMALL] = 90;
		calories[MEDIUM] = 105;
		calories[LARGE] = 120;
		cout << "ordering: " << getSizeName(size) << " brownie..." << endl;
	}

	Cookie::Cookie (Size size):Food(size) {
		name = "cookie";
		calories[SMALL] = 100;
		calories[MEDIUM] = 120;
		calories[LARGE] = 140;
		cout << "ordering: " << getSizeName(size) << " cookie..." << endl;
	}


	

	float Cheeseburger::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize)
		{
			case SMALL:
							price = 1.85;
			break;

			case MEDIUM:
							price = 3.00;
			break;

			case LARGE:
							price = 3.65;
			break;

			default:
				price = 0;

		}

		return price;
	}



	float Cake::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 1.75;
			break;

			case MEDIUM:
							price = 2.85;
			break;

			case LARGE:
							price = 3.75;
			break;

			default:
				price = 0;

		}

		return price;
	}

	float Brownie::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 1.00;
			break;

			case MEDIUM:
							price = 1.50;
			break;

			case LARGE:
							price = 2.10;
			break;

			default:
				price = 0;

		}

		return price;
	}

	float Cookie::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 0.75;
			break;

			case MEDIUM:
							price = 1.25;
			break;

			case LARGE:
							price = 1.95;
			break;

			default:
				price = 0;

		}

			return price;
	}

}