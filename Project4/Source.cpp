#include "product.h"
#include <iostream>

using namespace std;

int answer;

product Eggs = eggs("Egglands Best", 10, 30, "$2.20", "$0.65" );
product Milk = milk("Dairyland Milk", 24, 40, "$3.85", "$1.13" );
product Bread = bread("Daisy's Best", 24, 40, "$3.85", "$1.13");
product Soda = soda("Flurry Pop", 24, 40, "$3.85", "$1.13");
product Meat = meat("BBQ Ribs", 24, 40, "$18.99", "$10.15");
product Cereal = cereal("Pop 'n Crunch", 24, 40, "$4.30", "$1.55");



int main()
{

	cout << "Welcome to the Sweep Mart's stock program\n";
	cout << "Select the product you would like to display information about:" << endl;
	cout << "1.) Eggs\n";
	cout << "2.) Milk\n";
	cout << "3.) Bread\n";
	cout << "4.) Soda\n";
	cout << "5.) Meat\n";
	cout << "6.) Cereal\n";
	cin >> answer;

	if (answer == 1) {
		cout << "What information would you like to display?\n";
		cout << "1.) Manufacturer\n";
		cout << "2.) Current Stock\n";
		cout << "3.) Recommended Stock\n";
		cout << "4.) Retail Price\n";
		cout << "5.) Wholesale Price\n";
	
	}

	else if (answer == 2) {
		cout << "What information would you like to display?\n";
		cout << "1.) Manufacturer\n";
		cout << "2.) Current Stock\n";
		cout << "3.) Recommended Stock\n";
		cout << "4.) Retail Price\n";
		cout << "5.) Wholesale Price\n";
	}
	else if (answer == 3) {
		cout << "What information would you like to display?\n";
		cout << "1.) Manufacturer\n";
		cout << "2.) Current Stock\n";
		cout << "3.) Recommended Stock\n";
		cout << "4.) Retail Price\n";
		cout << "5.) Wholesale Price\n";
	}
	else if (answer == 4) {
		cout << "What information would you like to display?\n";
		cout << "1.) Manufacturer\n";
		cout << "2.) Current Stock\n";
		cout << "3.) Recommended Stock\n";
		cout << "4.) Retail Price\n";
		cout << "5.) Wholesale Price\n";
	}
	else if (answer == 5) {
		cout << "What information would you like to display?\n";
		cout << "1.) Manufacturer\n";
		cout << "2.) Current Stock\n";
		cout << "3.) Recommended Stock\n";
		cout << "4.) Retail Price\n";
		cout << "5.) Wholesale Price\n";
	}
	else if (answer == 6) {
		cout << "What information would you like to display?\n";
		cout << "1.) Manufacturer\n";
		cout << "2.) Current Stock\n";
		cout << "3.) Recommended Stock\n";
		cout << "4.) Retail Price\n";
		cout << "5.) Wholesale Price\n";
	}
	else {
		cout << "You chose an invalid product, please try again\n";
	
	}























	
	//counter c1;
	//counter c2(3);
	//counter c3(10);

	//c1.increment();
	//cout << "this is the counter value" << c1.getCount() << endl;

	//for (int i = 0; i < 5; i++)
	//{
		//c1.increment();
		//cout << "this is the counter value" << c1.getCount() << endl;
	//}

	//for (int i = 0; i < 4; i++)
	//{
		//c2.increment();
		//cout << "this is the counter value " << c2.getCount() << endl;
	//}

	//c3.setCount(501);

	system("pause");


}
