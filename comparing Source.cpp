#include <iostream>
using namespace std;
// when we enter 'a' and 'A' then it gives us the wrong answer 
// this is happen because we are comparing the same letter with greater or less than sign insted of == sign 
int main()
{
	char letter1 = 'a';
	char letter2 = 'b';
	
	cout << " please enter your fisrt letter: " << endl;
	cin >> letter1;
	cout << "please enter your second letter: " << endl;
	cin >> letter2;
	 
	if (letter2 < letter1) {
		cout << "letter 2 comes first.";
	}
	else
	{
		cout << "letter 1 comes first";
	}
	
	while (true){}
	return 0;
		
}