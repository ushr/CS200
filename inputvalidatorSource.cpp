#include <iostream>
using namespace std;

int main()
{
	cout << " Please enter a number between 0 to 5: ";

	int choice;
	cin >> choice;

	while (choice < 0 || choice > 5)
	{
		cout << "invalid entry. Try again: ";
		cin >> choice;
	}
	cout << "Thank you" << endl;



	while (true);
	return 0;
}