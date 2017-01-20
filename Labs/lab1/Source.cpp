#include <iostream>
#include <string>
using namespace std;

int main()
{
	float ratio;
		cout << " How many batches do you want to make";
	cin >> ratio;

	float tspBakingSoda = 1 * ratio;
	float tspBakingPowder = 0.5 * ratio;
	float cupOfButter = 1 * ratio;
	float cupOfSugar = 1.5 * ratio;
	float eggs = 1 * ratio;
	cout << tspBakingSoda << "tsp baking soda" << endl;
	cout << tspBakingPowder << "tsp baking powder" << endl;
	cout << cupOfButter << " c butter " << endl;
	cout << cupOfSugar << " c white sugar" << endl;
	cout << eggs << endl;

	while (true);//kiudgey

	return 0;
}
