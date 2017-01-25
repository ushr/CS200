#include <iostream>
using namespace std;
// if we change less than to greater than expression then we cannot use the boolean variable . we need to change the boolen variable too.
int main()
{
	// decleration of variables
	bool isTallEnoughForRide;
	float feet;

	cout << "What is your height in feet : ";
	cin >> feet;


	if (feet > 3)
	{
		isTallEnoughForRide = true;
	}
	else
	{
		isTallEnoughForRide = false;
	}

	if (isTallEnoughForRide)
	{
		cout << "Permitted to ride the roller coaster.";
	}
	else
		cout << "Too short to ride the roller coaster.";
	cout << endl;
	while (true) {}

}