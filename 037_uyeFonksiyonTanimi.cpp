#include <iostream>
#include <string>
using namespace std;
/*
Bir C++ programında oluşturulan sınıf içerisinde bir veya birden fazla fonksiyon veya veri üyesi tanımlanabilir.
Tanımlanan bu üyelere sınıfın içerisinden veya dışarısından erişim sınırlaması belirlenebilir ve buna göre program
    içerisindeki bazı kısımlardan erişim engellenebilir veya açılabilir.
Bu örnekte sadece bir üye fonksiyon tanımlanmış ve erişimi public yapılmıştır. Yani program içerisinden herhangi
bir yerden erişime açık hale getirilmiştir.

*/

class Kitaplik {
public:
    void mesaj() {
        cout << "Merhaba..." << endl;
    }

};
int main() {
    Kitaplik k1;
    k1.mesaj();
    system("PAUSE");

    return 0;
}

