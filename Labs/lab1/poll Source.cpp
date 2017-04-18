#include<iostream>
#include<string>
#include <fstream>
using namespace std;

struct Option
{
	string title;
	int count;
};

struct poll
{
	string question;
	Option options[4];
};

int main()
{
	poll mypoll;

	mypoll.question = "what is the best food?:";

	mypoll.options[0].title = "pizza";
	mypoll.options[0].count = 0;

	mypoll.options[1].title = "veggie.taco";
	mypoll.options[1].count = 0;

	mypoll.options[2].title = "samosas";
	mypoll.options[2].count = 0;

	mypoll.options[3].title = "sushi";
	mypoll.options[3].count = 0;

	int num;
	bool done = false;
	while (!done)
	{
		cout << mypoll.question << endl;
		cout << "0." << mypoll.options[0].title << endl;
		cout << "1." << mypoll.options[1].title << endl;
		cout << "2." << mypoll.options[2].title << endl;
		cout << "3." << mypoll.options[3].title << endl;
		cout << "4." << "quit" << endl;
		
	cout << "what is your selection: ";
	cin >> num;
		if (num == 0)
		{
			mypoll.options[0].count = mypoll.options[0].count + 1;
		}
		else if (num == 1)
		{
			mypoll.options[1].count = mypoll.options[1].count + 1;
		}
		else if (num == 2)
		{
			mypoll.options[2].count = mypoll.options[2].count + 1;
		}
		else if (num == 3)
		{
			mypoll.options[3].count = mypoll.options[3].count + 1;
		}
		else if (num == 4)
		{
			done = true;
		}
	}
	
	ofstream output;
	output.open("result.txt");
	output << mypoll.question << endl;

	output << "RESULTS" << endl;
	output <<mypoll.options[0].title << "......." << mypoll.options[0].count << " votes " <<endl;
	output <<mypoll.options[1].title << "......." << mypoll.options[0].count << " votes " << endl;
	output <<mypoll.options[2].title << "......." << mypoll.options[0].count << " votes " << endl;
	output <<mypoll.options[3].title << "......." << mypoll.options[0].count << " votes " << endl;


	output.close();



	
	

	

	while (true);
	return 0;

}