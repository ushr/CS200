
#include<iostream>
using namespace std;

int main()
{
	int choice;
	cout << "1. int " << endl;
	cout << "2. float " << endl;
	cout << "3. boolen " << endl;
	cout << "4. double " << endl;

	cout << "please select any number from 1-4 : ";
	cin >> choice;

	if (choice == 1)
	{
		int x = 10;
		int *ptrx;
		ptrx = &x;
		cout << " integer size:" << sizeof(x) << " ,address: "<< ptrx;

	}
	else if (choice == 2)
	{
		float y = 9.9;
		float *ptry;
		ptry = &y;
		cout << " float size:" << sizeof(y) << " ,address: " << ptry;
	}
	else if (choice == 3)
	{
		bool isDone;
		bool *ptrisDone;
		ptrisDone = &isDone;
		cout << " boolen size :" << sizeof(isDone) << " ,address: " <<  ptrisDone;
	}
	else if  ( choice == 4)

	{
		double z = 10.00;
		double* ptrz;
		ptrz = &z;

		cout << "double size : " << sizeof(z) << " ,address: " << ptrz;
	}
	else
	{
		cout << "please select any number from 1-4 : ";
		cin >> choice;
	}


	

	 
	while (true);
	return 0;

}
