#include <iostream>
#include <string>
using namespace std;
/*
Aşağıdaki örnekte verilen getline() fonksiyonu klavyeden girilen bir satır veriyi belirtilen değişkene aktarmak için kullanılır.
Getline yerine cin tek başına kullanılırsa boşluktan sonra girilen değerleri değişkene aktarmaz.
Getline kullanımı için string kütüphanesinin eklenmiş olması gerekir ( #include <string>)
*/

class Kitaplik {
public:

	void mesaj(string kitapAdi) {
		cout <<"Girdiginiz Kitap: " <<kitapAdi << endl;
	}
};


int main() {
	Kitaplik k1;
	string a;
	cout << "Kitap Adi Girin:";
	getline(cin, a);
	k1.mesaj(a);
	system("PAUSE");
	return 0;
}

