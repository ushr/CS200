#include <iostream>

using namespace std;
int main()
{
	int secretNumber = 7;
	int playerGuess;

	do
	{
		cout << "Enter your guess: ";
		cin >> playerGuess;

		if (playerGuess < secretNumber)
		{
			cout << "Too low!" << endl;
		}
		else if (playerGuess > secretNumber)
		{
			cout << "Too high!" << endl;
		}

	} while (playerGuess != secretNumber);

	cout << "You win!" << endl;

	while (true);
	return 0;
}