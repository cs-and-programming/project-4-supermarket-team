#include "product.h"
#include <iostream>

#ifndef	PRODUCT_H
#define 	PRODUCT_H
#endif


using namespace std; 

product::product() {

}



product::product(string n, int e, int t, float w, float r)
{
	name = n;
	currinvent = e; 
	needinvent = t; 
	wholesale = w; 
	retail = r; 


}


float product::profit()
{
	return 0.0f;
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


float product::getWholesale()
{
	return wholesale; 
}

void product::setWholesale(float value)
{
	wholesale = value;
}

product::~product()
{
}
