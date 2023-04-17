#include <iostream>
using namespace std;

int main()
{
	int secretNum = 7;
	int guess = 0;


	while (secretNum != guess)
	
	{
		cout << "Enter guess:" << endl;
		cin >> guess;
	}
	cout << "You Win!" << endl;


	return 0;
}
