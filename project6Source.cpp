#include <iostream>
#include <string>
using namespace std;

int main()
{
	float a, b;
	cout << "Enter a:";
	cin >> a;
	cout << "Enter b:";
	cin >> b;
	cout << endl;

	cout << " What kind of operation ?" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract"<< endl;
	cout << " 3. Multiply"<< endl;
	cout << "Divide" << endl;

	cout << " what is your choice?";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << a + b << endl;
		break;

	case 2:
		cout << a - b << endl;
		break;

	case 3:
		cout << a * b << endl;
		break;

	case 4:
		cout << a / b << endl;
		break;

	default:
		cout << "Invalid choice" << endl;
	}




	while (true);
	return 0;
}