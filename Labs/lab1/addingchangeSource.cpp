#include <iostream>
#include <string>
using namespace std;

// Declare function here
float CountChange (int quaterCount, int dimeCount,int nickelCount,int pennyCount)
{
	float money = .25 *quaterCount + 0.1 * dimeCount + 0.05 * nickelCount + 0.01 * pennyCount;
	return money;
}


int main()
{
	while (true)
	{
		int quarters, dimes, nickels, pennies;

		cout << "How many quarters? ";
		cin >> quarters;

		cout << "How many dimes? ";
		cin >> dimes;

		cout << "How many nickels? ";
		cin >> nickels;

		cout << "How many pennies? ";
		cin >> pennies;

		float money = CountChange(quarters, dimes, nickels, pennies);
		cout << "Money: $" << money << endl;

		cout << endl << endl;
	}
	while (true);
	return 0;
}