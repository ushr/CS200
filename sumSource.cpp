#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	bool isDone = false;

	while (!isDone)
	{
		int number;
		cout << "enter a number: ";


		cin >> number;
		sum = sum + number;

		char choice;
		cout << "Type (Q/q) to quit,or (A/a) to enter another: ";

		cin >> choice;

		if (choice == 'Q' || choice == 'q')
		{

			isDone = true;
			cout << "The sum is: " << sum << endl;
		}
	}


	while (true);
	return 0;
}