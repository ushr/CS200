#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct Student
{
    string surname;
    string givenName;
    string degree;
    float gpa;
	string classes[4] = { "CS200","CS210","ENGL101","MATH172" };

    void Display()
    {
        cout << endl;
        cout << surname << ", " << givenName;
        cout << "\t" << degree << " (" << gpa << " gpa)" << endl;

        cout << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << "class" << i << " " << classes[i] << endl << endl;;
		}
    }
};

Student* ReadStudentList( string filename, int& studentCount )
{
    Student* studentList = nullptr;

    ifstream input( filename );

    // First line of text file is the amount of students
    input >> studentCount;

    studentList = new Student[ studentCount ];

    for ( int i = 0; i < studentCount; i++ )
    {
        input >> studentList[i].surname;
        input >> studentList[i].givenName;
        input >> studentList[i].degree;
        input >> studentList[i].gpa;
		for (int j = 0; j < 4; j++) 
		{
			input >> studentList[i].classes[j];
		}
    }

    input.close();

    cout << studentCount << " students loaded" << endl;

    return studentList;
}

void SaveStudentList( string filename, const Student* studentList, int studentCount )
{
    ofstream output( filename );

    output << studentCount << endl;
	for (int i = 0; i < studentCount; i++)
	{
		output << setw(20)
			<< studentList[i].surname << setw(15)
			<< studentList[i].givenName << setw(10)
			<< studentList[i].degree << setw(10)
			<< studentList[i].gpa ;
		for (int j= 0; j < 4; j++)
		{

			output <<setw(10)<< studentList[i].classes[j] << setw(10);
	}
		output << endl;

    }

    output.close();

    cout << "File saved" << endl;
}

void DisplayStudents( const Student* studentList, int studentCount )
{
    for ( int i = 0; i < studentCount; i++ )
    {
        string name = studentList[i].surname + ", " + studentList[i].givenName;
        cout << i << ". \t " << setw( 20 )
            << name << setw( 15 )
            << "DEGREE: " << studentList[i].degree << setw( 15 )
            << "GPA: " << studentList[i].gpa ;
		for (int j = 0; j < 4; j++)
		{

			cout <<setw(10) <<studentList[i].classes[j] ;
		}
		cout << endl;
    }
}

void MakeANote()
{
    ofstream output( "USE_THIS_DIRECTORY.TXT" );
    output << "PUT YOUR INPUT FILE IN THIS DIRECTORY!" << endl;
    output.close();
}

int main()
{
    MakeANote();

    int studentCount;
    Student* students = ReadStudentList( "studentList_classes.txt", studentCount );

    bool done = false;
    while ( !done )
    {
        cout << endl << endl;

        DisplayStudents( students, studentCount );

        cout << endl << "Enter a student ID, between 0 and " << studentCount - 1 << ", " << endl;
        cout << "OR enter -1 to save quit." << endl;
        cout << " >> ";
        int modifyIndex;
        cin >> modifyIndex;

        if ( modifyIndex < -1 || modifyIndex >= studentCount )
        {
            // Invalid!
            continue;
        }

        if ( modifyIndex == -1 )
        {
            break;
        }

        students[ modifyIndex ].Display();

        cout << "Modify which field?" << endl;
        cout << " 1. Surname \n 2. Given name \n 3. Degree \n 4. GPA \n 5.class " << endl;
        cout << "\n >> ";
        int choice;
        cin >> choice;

        while ( choice < 1 || choice > 5)
        {
            cout << "Invalid choice, try again: ";
            cin >> choice;
        }

        if ( choice == 1 )
        {
            cout << "Enter new surname: ";
            cin >> students[ modifyIndex ].surname;
        }
        else if ( choice == 2 )
        {
            cout << "Enter new given name: ";
            cin >> students[ modifyIndex ].givenName;
        }
        else if ( choice == 3 )
        {
            cout << "Enter new degree: ";
            cin >> students[ modifyIndex ].degree;
        }
        else if ( choice == 4 )
        {
            cout << "Enter new gpa: ";
            cin >> students[ modifyIndex ].gpa;
        }
        else if ( choice == 5 )
        {
			cout << " Enter class index:";
			int index;
			cin >> index;
			cout << "Enter new class: ";
			cin >> students[modifyIndex].classes[index];

        }
		SaveStudentList("studentList_classes.txt", students, studentCount);

    }

    
    if ( students != nullptr )
    {
        delete [] students; // free student array
    }
    return 0;
}
