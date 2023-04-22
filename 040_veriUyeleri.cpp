#include <iostream>
#include <string>
using namespace std;
/*
Bir sınıf içerisinde fonksiyon üye tanımlanabildiği gibi veri üyesi de tanımlanabilir.
Bu üyelere erişim de sınırlandırılabilir veya programın tüm bölümlerinden erişilebilecek şekilde açılabilir.
*/

class Kitaplik {
public:
	string girilenKitap;
	void mesaj() {
		cout << "Girdiniz Kitap Adi: " << girilenKitap << endl;
	}
};

int main() {
	Kitaplik k1;
	cout << "Kitap Adi Giriniz: ";
	getline(cin,k1.girilenKitap);
	k1.mesaj();
	return 0;
}

