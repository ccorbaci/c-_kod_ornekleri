
#include <iostream>

using namespace std;

int main()
{

    //tamsayi
    int number = 5;

    //Ondalıklı Tamsayı.Bellekte 4 byte yer tutar.ondalık sayı hassasiyeti 6 haneli bir kesirli sayıya kadar doğru olabilir.
    float nUmber2 = 5.5;

    //Ondalıklı Tamsayı.Bellekte 8 byte bellek kullanır ve ondalık sayı hassasiyeti 15 haneli bir kesirli sayıya kadar doğru olabilir.
    double number3 = 5.5;

    //Temel aritmetik ifadeler " + - * / "  
    cout << 30 + 40 << endl;

    //mod operatörü 2 sayının bölümünden kalanı verir % isaretiyle gösterilir.10'u 3'e bölecek kalanı 1 olarak verecek.
    cout << 10 % 3 << endl;

    //işlem öncelikleri için bodmas ve pemdas kelimelerini aratın.Temel matematik işlem kuralları.
    //Parantezli işleri bu sekilde yapabilirsiniz.Burada 90 verecek.
    cout << (4 + 5) * 10 << endl;




    return 0;
}
