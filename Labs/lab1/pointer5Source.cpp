#include<iostream>
using namespace std;

int main()
{
	int choice;
	float priceHamburger = 4.99;
	float priceFries = 1.75;
	float priceSalad=3.99;
	float *ptrprice;
	float taxAmt;
	
	cout << "1.hamburger" << endl;
	cout << "2.fries" << endl;
	cout << "3.salad" << endl;
	cout << "what do you want ,please choose from 1-3: ";
	cin >> choice;

	if (choice == 1)
	{
		ptrprice = &priceHamburger;
		taxAmt = *ptrprice *0.065 + *ptrprice;
		cout << "original price :$" << *ptrprice << endl;
		cout << "with tax price :$" << taxAmt;
	}
	else if (choice == 2)
	{
		ptrprice = &priceFries;
		taxAmt = *ptrprice *0.065 + *ptrprice;
		cout << "original price :$" << *ptrprice << endl;
		cout << "with tax price :$" << taxAmt;
	}
	 else if (choice == 3)
	{
		ptrprice = &priceSalad;
		taxAmt = *ptrprice *0.065 + *ptrprice;
		cout << "original price :$" << *ptrprice << endl;
		cout << "with tax price :$" << taxAmt;
	}
	
	while (true);
	return 0;
}