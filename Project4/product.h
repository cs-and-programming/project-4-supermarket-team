#pragma once
#include <string.h>

using namespace std;

class product
{
private:
	int count;
	float wholesalePrice; 
	



public:
	float retailPrice;
	string name;  

	product(); 
	float profit(); 
	product(string n, float p, string m, float w, string d, int c);
	void updateCount(); 
	~product();
};

