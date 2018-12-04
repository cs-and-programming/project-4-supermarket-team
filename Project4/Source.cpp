/**************************************************************************************
* Name: David Peacock
* Email: peacoc24@students.rowan.edu
* Project Members: Yael Garcia, Asia Cunningham, Chris Mine, Nathan Pyles, John Mollo,
* Clifford Mendoza
***************************************************************************************
* Purpose:
*  This is Project 4, Supermarket Team
***********************************************/

#include "product.h"
#include <iostream>


using namespace std;

int answer, answerAgain;





int main()
{
	bool runs = true;
	while (runs) {
		char response = ' ';
		product Eggs("Egglands Best", 106, 200, 2.20, 0.65);
		product Milk("Dairyland Milk", 86, 100, 3.85, 1.13);
		product Bread("Daisy's Best", 56, 90, 3.20, 0.95);
		product Soda("Flurry Pop, 12-pack", 24, 40, 5.99, 3.20);
		product Meat("BBQ Ribs", 34, 70, 18.99, 10.15);
		product Cereal("Pop 'n Crunch", 21, 30, 4.30, 1.55);

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

				cout << "The recommended inventory is " << Eggs.needinvent;
				cout << ". Add " << (Eggs.needinvent - Eggs.currinvent) << " to current stock to make sure.\n";
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

				ccout << "The recommended inventory is " << Milk.needinvent;
				cout << ". Add " << (Milk.needinvent - Milk.currinvent) << " to current stock to make sure.\n";
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

				cout << "The recommended inventory is " << Bread.needinvent;
				cout << ". Add " << (Bread.needinvent - Bread.currinvent) << " to current stock to make sure.\n";
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

				cout << "The recommended inventory is " << Soda.needinvent;
				cout << ". Add " << (Soda.needinvent - Soda.currinvent) << " to current stock to make sure.\n";
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

				cout << "The recommended inventory is " << Meat.needinvent;
				cout << ". Add " << (Meat.needinvent - Meat.currinvent) << " to current stock to make sure.\n";
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

				cout << "The recommended inventory is " << Cereal.needinvent;
				cout << ". Add " << (Cereal.needinvent - Cereal.currinvent) << " to current stock to make sure.\n";
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

		cout << "Would you like to run the program again?" << endl;
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
