
#include <iostream>
#include<string>
//Basit MadLib oyunu yapalım
//Kullanıcıdan aldığımız kelimeleri cümleye yerleştirelim

using namespace std;

int main()
{
	string color, pluralNoun, celebrity;
	
	cout << "Enter a color: ";
	getline(cin, color);
	cout << "Enter the celebrity: ";
	getline(cin, celebrity);
	cout << "Enter the Plural Noun: ";
	getline(cin, pluralNoun);

	cout << "Roses are " << color << endl;
	cout << pluralNoun <<" are blue" << endl;
	cout << "I love " << celebrity << endl;


	return 0;
}
