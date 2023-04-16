
#include <iostream>

using namespace std;

int main()
{
    string greetings = "Merhaba Programa Hosgeldiniz..";

    //string tanımlanmış söz dizesinin kac karakter oldugunu yazdırın.

    cout << greetings.length() << endl;

    //İstediğiniz karakteri yazdırın.İlk rakam 0 dan başlar.

    cout << greetings[2] << endl;

    //find içinde yazan yazı 17. karakter sırasından başlar.Calıstırdıgınızda 17 yazdıgını goreceksınız.
    //0 hangi indexten sonra arama yapmak istediginizdir.

    cout << greetings.find("Hosgeldiniz",0) <<endl;

    //Parantez içindeki ilk sayı başlangıç.Yazdırdıgınızda ekranda Mer yazacak.

    cout << greetings.substr(0, 3) << endl;


    return 0;
}
