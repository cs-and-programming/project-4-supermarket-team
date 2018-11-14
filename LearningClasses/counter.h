#pragma once


class counter
{

private:
	int count; 
	int maxValue; 

public:
	counter();
	counter(int); 
	~counter();
	void increment(); 
	void setCount(int);
	int getCount() const; 
};

