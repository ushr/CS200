#include <iostream>
#include <string >
using namespace std;

int main()
{
	int num = 20;
	float num1 = 9.9;
	string name = "bob";
	int*ptrnum =  &num;
	float*ptrnum1 = &num1;
	string*ptrname = &name;


	cout << &num << " = " << *ptrnum << endl;
	cout << &num1 << " = " << *ptrnum1 << endl;
	cout << &name << " = " << *ptrname << endl;
	while (true);
	return 0;
}