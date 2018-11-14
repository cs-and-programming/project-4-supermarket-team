
#include "counter.h"
#include <iostream>
#ifndef	COUNTER_H
#define 	COUNTER_H
#endif

using namespace std; 

counter::counter()
{
	count = 0; 
	maxValue = 5; 
}

counter::counter(int mVal)
{
	count = 0; 
	maxValue = mVal; 

}

void counter::increment()
{
	if (count < maxValue)
		count++;
	else
		cerr << "Counter Overflow: Cannot increment"; 
}

int counter::getCount() const 
{
	return count; 
}

void counter::setCount(int val) {
	if (val >= 0 && val <= 500)
		maxValue = val; 
	else
		cerr<<"New max Value has to be less than 500 and greater than 0" ; 
}

counter::~counter()
{
}
