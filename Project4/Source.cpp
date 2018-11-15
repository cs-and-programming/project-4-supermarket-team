#include "counter.h"
#include <iostream>

using namespace std;

int main()
{
	std::cout << "Hello World!\n";
	counter c1;
	counter c2(3);
	counter c3(10);

	c1.increment();
	cout << "this is the counter value" << c1.getCount() << endl;

	for (int i = 0; i < 5; i++)
	{
		c1.increment();
		cout << "this is the counter value" << c1.getCount() << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		c2.increment();
		cout << "this is the counter value " << c2.getCount() << endl;
	}

	c3.setCount(501);

	system("pause");


}
