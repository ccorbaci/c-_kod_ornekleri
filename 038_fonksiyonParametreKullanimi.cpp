#include <iostream>
#include <string>
using namespace std;
/*
Bir sınıf içerisinde tanımlanan fonksiyonlara dışarıdan parametre gönderilebilir.
Gönderilen parametre değeri bir sabit olabileceği gibi bir değişken de olabilir.
*/

class Kitaplik {
public:
    void mesaj(string kitapAdi) {
        cout << kitapAdi << endl;
    }
};

int main() {
    Kitaplik k1;
    k1.mesaj("Yuzuklerin Efendisi-Yuzuk Kardesligi");
    system("PAUSE");

    return 0;
}

