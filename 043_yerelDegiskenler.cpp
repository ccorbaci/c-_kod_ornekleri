#include <iostream>
#include <string>
using namespace std;
/*
Yerel Degiskenler

Değişken veri türü bildirimleri bir fonksiyonun içinde ya da dışında tanımlanabilir.
Yerel değişkenler,program yürütüldüğünde aktif hale gelir ve kendisi için ayrılan bellek alanlarını kullanır.
Ancak yer aldıkları blok sona erdiğinde bu bellek alanları iptal olur ve değişken içeriği tamamen yok olur.
Aynı blok daha sonra tekrar başlasa bile yerel değişkenler eski değerini alamaz!!
Program içinde birden fazla fonksiyon varsa,sadece tanımlandığı fonksiyonda geçerli olabilecek değişkenlere yerel değişken denir.(local variable)

Aşağıdaki örnekte main fonksiyonu içinde tanımlanan yerel değişken i'nin değeri ekranayaz fonksiyonuna gönderilerek yazdırılır.
Hem main hem de ekranayaz fonksiyonunda yazdırılan değer aynı olacaktır.

*/

int ekranayaz(int i) {
	cout << "Sayi Degeri = " << i << endl;
	return 0;
}



int main() {
	int i = 5;
	cout << "Sayi Degeri= " << i << endl;
	ekranayaz(i);
	system("PAUSE");
	return 0;
}
