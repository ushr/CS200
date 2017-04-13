/*
MODIFY THIS FILE
*/

#include "hp3_program.hpp"

#include <iostream>
using namespace std;


/* Setup() - 	Create the list of locations
 *              Allocate needed memory
 * */
void Program::Setup()
{
	*locationList;
	locationList = new Location[6];

	locationList[0].name = "Treasure room";
	locationList[1].name = "main entrance";
	locationList[2].name = "Living room";
	locationList[3].name = "bed room";
	locationList[4].name = "Basement ";
	locationList[5].name = "secret room";

	locationList[0].description = "There is lot of treasure";
	locationList[1].description = "There is mess all over the floor";
	locationList[2].description = "The living room has 55 inch TV and home theratere";
	locationList[3].description = "There is big mirror and nice bed ";
	locationList[4].description = "There is rotting carpet in the basement";
	locationList[5].description = "The secret room has path way to the basement";

	//location 1 neighbour to east.
	locationList[1].ptrToEast = &locationList[2];
	
	//location 2 neighbour to west.
	//location 2 neighbour to south.
	locationList[2].ptrToWest = &locationList[1];
	locationList[2].ptrToSouth = &locationList[4];

	//location 3 neighbour to south.
	//location 3 neighbour to north.
	//location 3 neighbour to west.
	locationList[3].ptrToSouth = &locationList[5];
	locationList[3].ptrToNorth= &locationList[0];
	locationList[3].ptrToWest = &locationList[2];

	//location 4 neighbour to east.
	//location 4 neighbour to north.
	locationList[4].ptrToEast = &locationList[5];
	locationList[4].ptrToNorth = &locationList[2];

	//location 5 neighbour to west.
	//location 5 neighbour to north.
	locationList[5].ptrToWest = &locationList[4];
	locationList[5].ptrToNorth = &locationList[3];

	ptrCurrentLocation = &locationList[1];
	ptrEndLocation = &locationList[0];


 

    // This is called automatically when the program begins
}



/* Cleanup() - 	Clean up memory allocated
 * */
void Program::Cleanup()
{
    // This is called automatically when the program ends
	if (locationList != nullptr)
	{
		delete[] locationList;
	}
}



/* Main() - Main program loop
 * */
void Program::Main()
{
	bool done = false;
	while (!done)
	{
		DisplayCurrentLocation();
		if (ptrCurrentLocation == ptrEndLocation)
		{
			cout << "you have reached your destination!";
			done = true;
			break;
		}
		string choice =GetUserInput();

		if (choice == "n" && ptrCurrentLocation->ptrToNorth != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToNorth;
		}
		else if (choice == "s" &&  ptrCurrentLocation->ptrToSouth != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToSouth;
		}
		else if (choice == "e" &&  ptrCurrentLocation->ptrToEast != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToEast;
		}
		else if (choice == "w" &&  ptrCurrentLocation->ptrToWest != nullptr)
		{
			ptrCurrentLocation = ptrCurrentLocation->ptrToWest;
		}
		else if (choice == "q")
		{
			done = true;
		}
		else
		{
			cout << "invalid choice" << endl << endl;
		}
		


	}
	cout << endl << "GOOD BYE!" << endl;
	while (true);
}



/* DisplayCurrentLocation() - Use the current location
 *              pointer to display the location's name
 *              and description, as well as which
 *              directions the player can move next.
 * */
void Program::DisplayCurrentLocation()
{
	cout << ptrCurrentLocation->name << endl;
	cout << ptrCurrentLocation->description << endl;

	if (ptrCurrentLocation->ptrToEast!= nullptr) 
	{
		cout << "you can move :      *East" << endl;
	}
	if (ptrCurrentLocation->ptrToNorth != nullptr)
	{
		cout << "you can move :      *North" << endl;
	}
	if (ptrCurrentLocation->ptrToWest != nullptr)
	{
		cout << "you can move :      *West" << endl;
	}
	if (ptrCurrentLocation->ptrToSouth != nullptr)
	{
		cout << "you can move :      *South" << endl;
	}
}



/* GetUserInput() - Display the list of options to the
 *                  user, then get their input and return
 *                  their choice.
 * */
string Program::GetUserInput()
{
	string choice;
	cout << endl << endl;
	cout << "Enter your options:  "<< "(n)orth" << "\t" << "(s)outh" << "\t" <<"(e)ast" << "\t" << "(w)est" << "\t" <<"(q)uit :"  ;
	cin >> choice;
	cout << endl;
	

		
		return choice;// temp - replace me
}



/************************************/
/* Don't modify *********************/
/************************************/

Program::Program()
{
    locationList = nullptr;
    ptrCurrentLocation = nullptr;
    Setup();
}

Program::~Program()
{
    Cleanup();
}
