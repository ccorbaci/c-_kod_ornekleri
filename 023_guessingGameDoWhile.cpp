#include <iostream>
using namespace std;

int main()
{
	int secretNum = 7;
	int guess = 0;


	do{
		cout << "Enter guess:" << endl;
		cin >> guess;
	} while (secretNum != guess);


		cout << "You Win!" << endl;
	return 0;
}
