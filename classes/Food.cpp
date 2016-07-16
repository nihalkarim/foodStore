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

}