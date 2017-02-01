#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number;
	cout << "enter a number between 1 to 5 :";
	cin >> number;
	string roman;

	while (number)
	{
		switch (number)
		{
		case 1:
			roman = " I";

			break;
			
		case 2:
			roman = " II";

			break;
			
		case 3:
			roman = " III";

			break;
			
		case 4:
			roman = "IV";

			break;
			
		case 5:
			roman = " V";

			break;
			
		}
		{
			cout << "your roman number is :" << roman << endl;
			cout << "enter a number between 1 to 5 :";
			cin >> number;

		}
	}





	while (true);
	return 0;

}