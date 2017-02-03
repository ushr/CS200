#include <iostream>
using namespace std;

int main()
{
	float startingWage;
	float percentRaisePerYear;
	float adjustWage;
	int yearsWorked;

	cout << "what is your starting wage :";
	cin >> startingWage;

	cout << "what is the percent raise do you get per year: ";
	cin >> percentRaisePerYear;

	cout << "How many work have you worked: ";
	cin >> yearsWorked;
	adjustWage = startingWage;
	for (int i = 0; i < yearsWorked; i++)
	{
		adjustWage = adjustWage + adjustWage * (percentRaisePerYear / 100);
		
}
	cout << "your new wage is  " << adjustWage << endl;
	while (true);
	return 0;
}