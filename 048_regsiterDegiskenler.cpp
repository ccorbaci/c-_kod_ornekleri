#include <iostream>
#include <string>
using namespace std;
/*
register Değişkenler

Tüm değişkenler bellek üzerindeki alanları kullanır. Bazı durumlarda değişkenlere çook daha hızlı bir şekilde erişmek söz konusudur.
Böyle durumlarda register değişkenleri tanımlanarak bellek alanları yerine,Hızllı bellek yazmaçları kullanılır.
ANcak bi alanlar sınırlı olduğundan fazla sayıda register değişken tanımlanırsa amacına ulaşmaz.
Derleyici fazla bulduklarını normal bellek alanlarına yerleştirir.

*/

int main() {
	register int i = 100;
	i = i + 100;
	cout << i << endl;

	system("PAUSE");

	return 0;
}

