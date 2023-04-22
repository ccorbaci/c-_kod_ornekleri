#include <iostream>
#include <string>
using namespace std;
/*
c++ programlama dilinde ve diğer programlama dillerinde genel olarak bu tür (private,protected)
veri üyelerine erişimde set() ve get() fonksiyonları kullanılır.
set() fonksiyonu sınıf üyesini dışarıdan yani burada main içerisinden değer atamak için
get() fonksiyonu da sınıf üyesinin dışarıdan çağırılabilmesi için kullanılır.
Bu iki fonksiyonda public olarak tanımlanmak zorundadır.
*/


class Kitaplik {
private:
	string kitap;
public:
	void setKitap(string kitapAdi) {
		kitap=kitapAdi;
	}
	string getKitap() {
		return kitap;
	}
	void mesaj() {
		cout << kitap << endl;
	}

};

int main() {

	Kitaplik k1;
	string isim;
	cout << "Kitap Adi Girin: ";
	getline(cin, isim);
	k1.setKitap(isim);
	k1.mesaj();
	cout << k1.getKitap();

	return 0;
}

