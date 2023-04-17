
#include <iostream>
using namespace std;

int main()
{
	bool isMale = true;
	bool tall = false;

	
	// && and operatörüdür.iki koşul da true ise bu koşul çalışacak.

	if (isMale && tall) {
		cout << "You are a tall male" << endl;
	}
	// || operatörü or operatörüdür.İki koşuldan biri doğru ise çalışacak.
	else if (isMale || tall) {
		cout << "You are male but you are not tall. ";
	}
	// iki koşıul da doğru değilse aşağıdaki koşul çalışacak.
	else {
		cout << "You are not male" << endl;
	}
	return 0;

}
 
