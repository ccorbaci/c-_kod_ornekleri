#include <iostream>
#include <string>
using namespace std;
/*
Auto Değişkenler

C++ dilinde tanımlanan tüm değişkenler aksi belirtilmediği takdirde default olarak auto olarak tanımlanır.
Auto değişkneler geçerli oldukları fonksiyondan veya kısımdan çıkarılınca hafzadan atılır ve yeniden geçerli oldukları kısma 
veya fonksiyona girildiğinde yeniden oluşturulurlar.
*/

int sayitopla(int a, int b, int c) {
	auto toplam = 0;
	toplam = a + b + c;
	return toplam;
}

int main() {
	auto sonuc = 0;
	auto mesaj = "Sonuclar";
	int deger1 = 10;
	int deger2 = 20;
	int deger3 = 30;
	sonuc = sayitopla(deger1, deger2, deger3);
	cout << mesaj << deger1 << "+" << deger2 << "+" << deger3 << endl;
	cout << "Toplam= " << sonuc << endl;
	system("PAUSE");

	return 0;
}

