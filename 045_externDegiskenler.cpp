#include <iostream>
#include <string>
#include <header.h>


using namespace std;
/*
Extern Degiskenler

Bazı durumlarda bir program dosyası içinde tanımlanan küresel değişkenlerin,bir başka programda geçerli olması istenebilir.
Böyle durumlarda extern değişkenler kullanılır.

header.h include ettik burada bir değişken olduğunu varsayarsanız; (aşağıdaki kod varsaydığım header.h kodu)

#include <iostream>
using namespace std;

extern int externdegisken=10;
extern void ekranayaz(int i)
{
	cout<<"Extern Degisken="<<i<<endl;
}


*/

//ana program
int main() {

	externdegisken = 15;
	ekranayaz(externdegisken);
	system("PAUSE");
	return 0;

	system("PAUSE");
	return 0;
}

