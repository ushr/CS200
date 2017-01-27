#include <iostream>
#include <string>
using namespace std;

int main()
{
	float studentPoints;
	float totalPoints;

	cout << "Enter your total points : ";
	cin >> studentPoints;

	cout << "What was total point : ";
	cin >> totalPoints;

	float percentage = (studentPoints / totalPoints) * 100;



	cout << " score:" << percentage << "%" << endl;

	if (percentage >= 70)
	{
		cout << "pass" << endl;
	}

	else
	{
		cout << "fail" << endl;
	}
	while (true);
	return 0;
}