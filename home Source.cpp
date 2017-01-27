#include <iostream>
#include <string>
using namespace std;

int main()
{
	string homeTown;
	
	cout << " what is your home town:?";

	cin >> homeTown;

	if (homeTown.size() > 6)

	{
		cout << "That's a long name!" << endl;
	}


	string name;
	cout << "What is your name?";
	cin >> name;


	cout << "Hi There " << name << " from " << homeTown << endl;
		while(true);
	return 0;
}