#include <iostream>     // input/output commands
using namespace std;    // standard library

int main()              // program entry function
{
    // Variable declarations
    float width;
    float length;
    float area;
    float perimeter;



     cout << "ROOM CALCULATOR" <<
     endl;// Get user input:

     cout << "Room 1 " <<
     endl;

    cout << "Enter the width: ";        // text output
    cin >> width;                       // input from the user

    cout << "Enter the length: ";
    cin >> length;

    area = width * length;              // assignment statement
    perimeter = 2 * width + 2 * length; //  assignment statement

    // Display results:
    cout << endl;

    cout << "Area: " << area  << endl;
    cout << "perimeter :" << perimeter << endl;


     cout << "Room 2 " <<
     endl;

    cout << "Enter the width: ";        // text output
    cin >> width;                       // input from the user

    cout << "Enter the length: ";
    cin >> length;

    area = width * length;              // assignment statement
    perimeter = 2 * width + 2 * length; //  assignment statement

    // Display results:
    cout << endl;

    cout << "Area: " << area  << endl;
    cout << "perimeter :" << perimeter << endl;


    return 0;           // end of program
}

