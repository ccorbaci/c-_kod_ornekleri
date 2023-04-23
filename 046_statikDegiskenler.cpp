#include <iostream>
#include <string>
using namespace std;
/*

Statik Değişkenler

Bir değişken,yerel değişken olarak tanımlanmış ise,bu değişkenin yer aldığı fonksiyonun yürütülmesi sona erdiğinde değeri yok olur.
Bu durumu önleyerek,değişken değerinin sadece ilgili fonksiyon içinde değil,tüm program boyunca geçerli olması sağlanabilir.Böyle bir amaca ulaşmak için
static değişken tanımlanır.
Static ile küresel değişkenler birbirine çok benzer.
Ancak static değişkenler,fonksiyonun yürütülmesi sonunda değerini kaybetmez;ancak bu değer diğer fonksiyonlar tarafından da kullanılamaz!!

*/

void fonk1(void) {
	int id1 = 1;
	cout << id1 << " ";
	id1=id1 + 5;
	cout << id1 << " ";
}
void fonk2(void) {
	static int id1 = 0;
	cout << id1 << " ";
	id1 = id1 + 9;
	cout << id1 << " ";
}

int main() {
	fonk1(); // 1 6 
	fonk2(); // 0 9
	cout << endl;
	fonk1(); // 1 6
	fonk2(); // 9 18
	cout << endl;
	fonk1(); // 1 6
	fonk2(); // 18 27

	cout << endl;
	system("PAUSE");
	return 0;
}

