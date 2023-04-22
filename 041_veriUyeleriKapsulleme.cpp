#include <iostream>
#include <string>
using namespace std;
/*
Bir sınıf içerisinde fonksiyon üye tanımlanabildiği gibi veri üyesi de tanımlanabilir.
Bu üyelere erişim de sınırlandırılabilir veya programın tüm bölümlerinden erişilebilecek şekilde açılabilir.
*/

class Kitaplik {
private:
	string kitapAdi; //kapsulleme var burada
public:
	void kitapadigoster() {
		cout << "Girdiniz Kitap Adi: " << kitapAdi << endl;
	}
	void kitapadigir(){
		cout << "Kitap Adi Giriniz:";
		getline(cin, kitapAdi);
	}
};


int main() {
	Kitaplik k1;
	k1.kitapadigir();
	k1.kitapadigoster();
	system("PAUSE");

	return 0;
}

