#pragma once
#include <string>

using namespace std;

class product
{
private:
	int count;
	
	



public:
	string name; 
	int currinvent;
	int needinvent;
	float retail;
	float wholesale;


	product(); 
	product(string n, int e, int t, float w, float r);
	float profit();

	void updateCount(); 
	float getWholesale();
	void setWholesale(float value);
	~product();
};

