#include <iostream>
using namespace std;

int main()
{
	int feet;
	cout << "How many feet do you want ?";
	cin >> feet;


	for (int i = 0; i <= 12 * feet; i++)
	{

		if (i % 12 == 0)
		{
			cout << "|";

		}
		else
		{
			cout << "-";
		}

	}
	

	while (true);
	return 0;
}