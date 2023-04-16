
#include <iostream>

using namespace std;

int main()
{

    //tamsayi
    int number = 5;
    cout << number << endl;

    //Ondalıklı Tamsayı.Bellekte 4 byte yer tutar.ondalık sayı hassasiyeti 6 haneli bir kesirli sayıya kadar doğru olabilir.
    float number2 = 5.5;
    cout << number2 << endl;

    //Ondalıklı Tamsayı.Bellekte 8 byte bellek kullanır ve ondalık sayı hassasiyeti 15 haneli bir kesirli sayıya kadar doğru olabilir.
    double number3 = 6.5;
    cout << number3 << endl;

    //Temel aritmetik ifadeler " + - * / "  
    cout << 30 + 40 << endl;

    //mod operatörü 2 sayının bölümünden kalanı verir % isaretiyle gösterilir.10'u 3'e bölecek kalanı 1 olarak verecek.
    cout << 10 % 3 << endl;

    //işlem öncelikleri için bodmas ve pemdas kelimelerini aratın.Temel matematik işlem kuralları.
    //Parantezli işleri bu sekilde yapabilirsiniz.Burada 90 verecek.
    cout << (4 + 5) * 10 << endl;

    //sayının bir fazlası istiyorsak ++ kullanırız.Döngüler gibi durumlarda bu kısaltma gerekli olacak.-- de 1 azaltır.
    //Örneğin +=5 sayıya 5 ekleyecektir.
    number++;
    cout << number << endl;

    //2 tamsayıyı böldüğümüzde sonucu tamsayı alırız.Sonucu ondalıklı istiyorsak sayıları da ondalıklı vermemiz gerek.
    cout << 10.0 / 3.0 << endl;     

    return 0;
}
