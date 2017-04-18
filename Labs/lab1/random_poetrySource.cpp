#include <iostream>
#include <fstream>     
#include <string>
#include <cstdlib>     
#include <ctime>        
using namespace std;

struct PoemMaker
{
	string Nouns[10];
	string Adjectives[10];


	void LoadNouns(string filename)
	{
		ifstream inputNoun(filename);

		for (int i = 0; i < 10; i++)
		{
			inputNoun >>Nouns [i];
		}
		inputNoun.close();


	}

	void LoadAdjectives(string filename)
	{
		ifstream inputAdjective(filename);
		for (int j = 0; j < 10; j++)
		{
			inputAdjective >> Adjectives[j];
		}
		inputAdjective.close();

	}

	string GetRandomNoun()
	{
		int randomnumber = rand() % 10;
		return Nouns[randomnumber];
	}

	string GetRandomAdjective()
	{
		int randomnumber = rand() % 10;
		return Adjectives[randomnumber];
	}

	string GeneratePoem(int lines)//worked with melkom
	{
		string poem = " ";
		for (int i = 0; i < lines; i++)
		{
			
			poem += GetRandomNoun();
			poem += " are ";
			poem += GetRandomAdjective();
			poem += "\n";
		
		}
		return poem;

	}
};

int main()
{
	srand(time(NULL));
	PoemMaker poemmaker;
	poemmaker.LoadNouns("nouns.txt");//worked with melkom
	poemmaker.LoadAdjectives("adjectives.txt");// worled with melkom
	string poem = poemmaker.GeneratePoem(5);

	cout << poem;

	while (true);
	return 0;
	
}