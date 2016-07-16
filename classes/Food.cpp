#include "Food.h"
#include "FoodFactory.h"
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

	Burger::Burger (Size size):Food(size) {
		name = "burger";
		calories[SMALL] = 150;
		calories[MEDIUM] = 210;
		calories[LARGE] = 270;
		cout << "ordering: " << getSizeName(size) << " burger..." << endl;
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

	Cookie::Cookie (Size size):Food(size) {
		name = "cookie";
		calories[SMALL] = 100;
		calories[MEDIUM] = 120;
		calories[LARGE] = 140;
		cout << "ordering: " << getSizeName(size) << " cookie..." << endl;
	}


	float Burger::getPrice() {

		float price;
		Size cakeSize = getSize();

		switch(cakeSize) {
			case SMALL:
							price = 1.55;
			break;

			case MEDIUM:
							price = 2.70;
			break;

			case LARGE:
							price = 4.95;
			break;

			default:
				price = 0;

		}

		return price;
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

	void Order::orderA(Size size, string name) {
		FoodFactory factory;
		Food *newOrder = factory.getFood(size, name);
		orderedItems.push_back(newOrder);
	}

	void Order::receipt() {

		float totalPrice = 0;
		int totalCalories = 0;

		cout << "* * * * * ORDER DETAILS * * * * *" << endl << endl;
		cout << "\tname\t\t\tsize\t\tprice\t\t\tcalories " << endl << endl;

		for (Food *item : orderedItems ) {

			float price = item->getPrice();
			int cal = item->calories[item->getSize()];

			totalPrice += price;
			totalCalories += cal;

		    cout << "\t" << item->name << "\t\t\t" << getSizeName(item->getSize()) << "\t\t$" <<  price << "\t\t\t" <<  cal << endl;
		}

		cout << "______________________" << endl;
		cout << "ORDER TOTAL: $" << totalPrice << endl;
		cout << "Total calories: " << totalCalories << " cal." << endl << endl;
		cout << "______________________" << endl;

	}

}