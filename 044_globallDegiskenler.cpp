#include <iostream>
#include <string>
using namespace std;
/*
Global Degiskenler

Eğer bir değişkenin program içindeki tüm fonksiyonlarda geçerli olmasını istiyorsanız,bu kez fonksiyonların dışında bir yerde bildirim yapmalısınız.
Bu tür değişkenlere global variable denir.
*/

int i = 10;

int ekranayaz() {
	cout << "Sayi Degeri= " << i << endl; // global i
	return 0;
}

int main() {
	int i = 5;
	cout << "Sayi Degeri= " << i << endl; // local i
	ekranayaz();

	system("PAUSE");
	return 0;
}
