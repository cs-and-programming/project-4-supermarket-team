#include "product.h"
#include <iostream>


using namespace std;

int answer, answerAgain;





int main()
{
	bool runs = true;
	while (runs) {
		char response = ' ';
		product Eggs("Egglands Best", 10, 30, 2.20, 0.65);
		product Milk("Dairyland Milk", 24, 40, 3.85, 1.13);
		product Bread("Daisy's Best", 24, 40, 3.20, 0.95);
		product Soda("Flurry Pop, 12-pack", 24, 40, 5.99, 3.20);
		product Meat("BBQ Ribs", 24, 40, 18.99, 10.15);
		product Cereal("Pop 'n Crunch", 24, 40, 4.30, 1.55);

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
			cin >> answerAgain;

			if (answerAgain == 1) {

				cout << Eggs.name << endl;
			}

			else if (answerAgain == 2) {

				cout << "Current inventory is " << Eggs.currinvent << endl;
			}

			else if (answerAgain == 3) {

				cout << "The needed inventory is " << Eggs.needinvent << endl;
			}
			else if (answerAgain == 4) {

				cout << "$" << Eggs.retail << endl;
			}
			else if (answerAgain == 5) {
				cout << "$" << Eggs.wholesale << endl;
			}
			else {
				cout << "Please try again\n";
			}

		}

		else if (answer == 2) {
			cout << "What information would you like to display?\n";
			cout << "1.) Manufacturer\n";
			cout << "2.) Current Stock\n";
			cout << "3.) Recommended Stock\n";
			cout << "4.) Retail Price\n";
			cout << "5.) Wholesale Price\n";
			cin >> answerAgain;

			if (answerAgain == 1) {

				cout << Milk.name << endl;
			}

			else if (answerAgain == 2) {

				cout << "Current inventory is " << Milk.currinvent << endl;
			}

			else if (answerAgain == 3) {

				cout << "The needed inventory is " << Milk.needinvent << endl;
			}
			else if (answerAgain == 4) {

				cout << "$" << Milk.retail << endl;
			}
			else if (answerAgain == 5) {
				cout << "$" << Milk.wholesale << endl;
			}
			else {
				cout << "Please try again\n";
			}
		}

		else if (answer == 3) {
			cout << "What information would you like to display?\n";
			cout << "1.) Manufacturer\n";
			cout << "2.) Current Stock\n";
			cout << "3.) Recommended Stock\n";
			cout << "4.) Retail Price\n";
			cout << "5.) Wholesale Price\n";
			cin >> answerAgain;

			if (answerAgain == 1) {

				cout << Bread.name << endl;
			}

			else if (answerAgain == 2) {

				cout << "Current inventory is " << Bread.currinvent << endl;
			}

			else if (answerAgain == 3) {

				cout << "The needed inventory is " << Bread.needinvent << endl;
			}
			else if (answerAgain == 4) {

				cout << "$" << Bread.retail << endl;
			}
			else if (answerAgain == 5) {
				cout << "$" << Bread.wholesale << endl;
			}
			else {
				cout << "Please try again\n";
			}
		}

		else if (answer == 4) {
			cout << "What information would you like to display?\n";
			cout << "1.) Manufacturer\n";
			cout << "2.) Current Stock\n";
			cout << "3.) Recommended Stock\n";
			cout << "4.) Retail Price\n";
			cout << "5.) Wholesale Price\n";
			cin >> answerAgain;

			if (answerAgain == 1) {

				cout << Soda.name << endl;
			}

			else if (answerAgain == 2) {

				cout << "Current inventory is " << Soda.currinvent << endl;
			}

			else if (answerAgain == 3) {

				cout << "The needed inventory is " << Soda.needinvent << endl;
			}
			else if (answerAgain == 4) {

				cout << "$" << Soda.retail << endl;
			}
			else if (answerAgain == 5) {
				cout << "$" << Soda.wholesale << endl;
			}
			else {
				cout << "Please try again\n";
			}
		}

		else if (answer == 5) {
			cout << "What information would you like to display?\n";
			cout << "1.) Manufacturer\n";
			cout << "2.) Current Stock\n";
			cout << "3.) Recommended Stock\n";
			cout << "4.) Retail Price\n";
			cout << "5.) Wholesale Price\n";
			cin >> answerAgain;

			if (answerAgain == 1) {

				cout << Meat.name << endl;
			}

			else if (answerAgain == 2) {

				cout << "Current inventory is " << Meat.currinvent << endl;
			}

			else if (answerAgain == 3) {

				cout << "The needed inventory is " << Meat.needinvent << endl;
			}
			else if (answerAgain == 4) {

				cout << "$" << Meat.retail << endl;
			}
			else if (answerAgain == 5) {
				cout << "$" << Meat.wholesale << endl;
			}
			else {
				cout << "Please try again\n";
			}
		}

		else if (answer == 6) {
			cout << "What information would you like to display?\n";
			cout << "1.) Manufacturer\n";
			cout << "2.) Current Stock\n";
			cout << "3.) Recommended Stock\n";
			cout << "4.) Retail Price\n";
			cout << "5.) Wholesale Price\n";
			cin >> answerAgain;

			if (answerAgain == 1) {

				cout << Cereal.name << endl;
			}

			else if (answerAgain == 2) {

				cout << "Current inventory is " << Cereal.currinvent << endl;
			}

			else if (answerAgain == 3) {

				cout << "The needed inventory is " << Cereal.needinvent << endl;
			}
			else if (answerAgain == 4) {

				cout << "$" << Cereal.retail << endl;
			}
			else if (answerAgain == 5) {
				cout << "$" << Cereal.wholesale << endl;
			}
			else {
				cout << "Please try again\n";
			}
		}

		else {
			cout << "You chose an invalid product, please try again\n";

		}

		cout << "Do you want to run another program?" << endl;
		cin >> response;

		if (response == 'n' || response == 'N')
		{
			runs = false;
		}
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
