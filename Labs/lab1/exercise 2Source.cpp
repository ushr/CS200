#include <iostream>
using namespace std;

int main()
{
	int item[4] = { 0,1,2,3 };
	cout << "item 0 :" << &item << endl;
	cout << "item 1 :" << &item << endl;
	cout << "item 2 :" << &item << endl;
	cout << "item 3 :" << &item << endl;
	cout << "array address" << item;
	while (true);
	return 0;
	

}