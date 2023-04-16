
#include <iostream>
#include<string>

//string include kısmına dikkat edin.

using namespace std;

int main()
{
	string name;
	cout << "Adiniz Nedir?:";
	getline(cin, name);
	cout << "Merhaba " << name << " Programa Hos Geldin";
	return 0;
}
