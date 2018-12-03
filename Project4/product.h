#pragma once
#include <string.h>

using namespace std;

class product
{
private:
	int count;
	float wholesalePrice, retailPrice; 
	



public:
	float price;
	string name; 
	string manufacturer;
	string description; 

	product(); 
	float profit(); 
	product(string n, float p, string m, float w, string d, int c);
	void updateCount(); 
	~product();
};

