#include "product.h"
#include <iostream>
#include <string>

#ifndef	PRODUCT_H
#define 	PRODUCT_H
#endif

using namespace std; 


product::product()
{
}

float product::profit()
{
	return 0.0f;
}

product::product(string n, float p, string m, float w, string d, int c)
{
	name = n; 
	price = p; 
	manufacturer = m; 
	wholesalePrice = w; 
	description = d; 
	count = c; 

}

void product::updateCount()
{
	if (count == 0)
	{
		cout << "Out of item" << endl; 
	}
	else
	{
		count -= 1;
	}
}




product::~product()
{
}
