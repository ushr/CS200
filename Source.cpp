#include <iostream>
using namespace std;
//scope of the age variable is to compare wether the age is greater than or less than 13
//scope of the ticket variable is to compare the ticket price.
int main()
{
	int age;
	float ticketPrice;

	cout << "Age? ";
	cin >> age;

	if (age < 13)
	{
		ticketPrice = 5.00;
	}
	else
	{
		ticketPrice = 7.00;
	}

	cout << "Ticket price: " << ticketPrice << endl;

	while (true) {} // temp - don't let program quit.

	return 0;
}