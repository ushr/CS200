#include<iostream>
#include <string>
using namespace std;

int main()
{
	int i;
	string students[3] = {"tom","jerry","trex"};
	string*ptrstudent;
	cout << "enter num 0-2: ";
	cin >> i;
	ptrstudent = &students[i];

	cout << "please enter the name of the student:";
	cin >> *ptrstudent;

	for (int j = 0; j< 3; j++)
	{
		cout << "student " << j << " = " << students[j] << endl;
	}



	while (true);
	return 0;
}