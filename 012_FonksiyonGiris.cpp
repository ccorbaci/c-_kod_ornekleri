
#include <iostream>

using namespace std;

void sayHi(string name, int age) {

	cout << "Hello " << name <<"you are "<<age<<" Years old"<<endl;

}

int main()
{
	cout << "*****"<<endl;
	sayHi("Mehmet ", 30);
	cout << "*****"<<endl;

	cout << "*****" << endl;
	sayHi("Ali ", 25);
	cout << "*****"<<endl;

	return 0;
}
 
