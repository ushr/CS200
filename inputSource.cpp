#include <iostream>
#include <string>
using namespace std;

int main()
{

	cout << " What is your favoriate fruit?" << endl;
	cout << "1. Apple" << endl;
	cout << "2. Banana" << endl;
	cout << "3. Pear" << endl;
	cout << "4. Strawberry " << endl;

	int choice;

	cout << "what is your selection :";
	cin >> choice;

	if (choice < 1 || choice > 4)
	{
		cout << " Invalid choice! " << endl;
	}
	else
	{
		cout << " Great choice " << endl;
	}

	while (true);
	return 0;
}