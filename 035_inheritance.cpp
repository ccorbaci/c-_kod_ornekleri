#include <iostream>
using namespace std;

class Chef{
public:
	void makeChicken() {
		cout << "The chef makes chicken" << endl;
}
	void makeSalad() {
		cout << "The chef makes salad" << endl;
}
	void makeSpecialDİsh() {
		cout << "The Chef makes bbq ribs" << endl;
}
};

class ItalianChef:public Chef {

};


int main() {
	Chef chef;
	chef.makeChicken();

	ItalianChef italianChef;
	italianChef.makeSalad();
	
	return 0;
}
