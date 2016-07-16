#include "Order.h"
#include "Food.h"
#include "FoodFactory.h"

namespace food {

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



