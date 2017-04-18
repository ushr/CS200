#include<iostream>
#include<string>
#include <fstream>
using namespace std;

int main() 
{
	cout << "what word you want to search for: " << endl;
	string search;
	cin >> search;

	cout << "what word do you want to replace with : " << endl;
	string replace;
	cin >> replace;

	string buffer;

	ifstream input("my story.txt");
	ofstream output("mystory_modified.txt");

	while (input >> buffer)
	{
		if (buffer == search)
		{
			output << replace<< " " ;
		}

		else
		{
			output << buffer << " " ;
		}
	}

	input.close();
	output.close();
	
	while (true);
	return 0;
}