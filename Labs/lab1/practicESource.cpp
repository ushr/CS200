#include <iostream>
#include <string>
using namespace std;

int main()
{
	string items[3];
	float prices[3];
	int arraySize = 3;
	int itemCount;

	for ( itemCount = 0; itemCount < arraySize; itemCount++)
	{
		cout << "Enter item name: ";
		cin >> items[itemCount];
		cout << "Enter price: ";
		cin >> prices[itemCount];
		
	}

	cout << endl;

	
	for (int counter = 0; counter < itemCount;	counter++)
	{
		cout << "Item #" << counter << ": " << items[counter] << ", $" << prices[counter] << endl;
	
	}
	while (true);
	return 0;
}