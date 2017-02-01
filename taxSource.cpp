#include <iostream>
#include <string>
using namespace std;

int main()
{
	float price;
	cout << "what is the item price ?:" ;
	cin >> price;

	
	cout << " what city are you from ?: ";
	string city;
	cin >> city;
	
	float total;
	if(city == "olathe" || city == "Olathe")
	{
		total = price + price * 0.065;
		cout << "total price is: " << total << endl;
	}
	else if (city == "Overlandpark" || city == "overlandpark")
	{
		total = price + price * 0.0935;
		cout << "total price is: " << total << endl;
	}

	else if (city == "Raytown" || city == "raytown")
	{
		total = price + price * 0.08225;
		cout << "total price is: " << total << endl;
	}
	
	else if (city == "Independence" || city == "independence")
	{
		total = price + price * 0.07725;
		cout << "total price is: " << total << endl;
	}
	else
	{
		total = price + price * 0.08;
		cout << "total price is: " << total << endl;
	}
	

	


	while (true);
	return 0;
}