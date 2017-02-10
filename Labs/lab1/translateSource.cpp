#include <iostream>
#include <string>
using namespace std;

// Input/Output functions

string GetHindi(string english)
{
	if (english == "cat")
	{
		return "bille";
	}
	else if (english == "dog")
	{
		return "kutta";
	}
	else if (english == "frog")
	{
		return "medhak";
	}
	else if (english == "rabbit")
	{
		return "khargosh";
	}


}

string GetEnglish(string hindi)
{
	if (hindi == "bille")
	{
		return "cat";
	}

	else if (hindi == "kutta")
	{
		return "dog";
	}
	else if (hindi == "medhak")
	{
		return "frog";
	}
	else if (hindi == "khargosh")
	{
		return "rabbit";
	}

}

// Menu functions

void DisplayMenu(int number, string translate)
{
	cout << number << "." << translate << " " << endl;

}

void EnglishToHindi()
{
	string English;
	cout << "English: ";
	cin >> English;
	string hindi;
	hindi = GetHindi(English);
	cout << " hindi: " << hindi << endl;


}

void HindiToEnglish()
{
	string Hindi;
	cout << "Hindi :";
	cin >> Hindi;
	string english;
	english = GetEnglish(Hindi);
	cout << " english: " << english << endl;
}

int main()
{
	bool isDone = false;

	while (!isDone)
	{
		cout << endl;
		DisplayMenu(1, "English to Hindi");
		DisplayMenu(2, "Hindi to English");
		DisplayMenu(3, "Quit");

		int choice;
		cout << "what do you want to transalate? ";
		cin >> choice;
		if (choice == 1)
		{
			EnglishToHindi();
		}
		else if (choice == 2)
		{
			HindiToEnglish();
		}
		else
		{
			isDone = true;
		}


	}

	return 0;
}
