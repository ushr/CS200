#include <iostream>
#include <string >
using namespace std;

int main()
{
	int num = 20;
	float num1 = 9.9;
	string name = "bob";
	cout << &num <<" = " << num <<  endl;
	cout << &num1 << " = " <<num1  << endl;
	cout << &name << " = " <<name  << endl;
	while (true);
	return 0;
}