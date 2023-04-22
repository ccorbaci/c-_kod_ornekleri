#include <iostream>
#include <string>
using namespace std;
void fonk1(void) {
    int id1 = 1;
    cout << id1 << " ";
    id1 = id1 + 5;
    cout << id1 << " ";;


}
void fonk2(void) {
    static int id1 = 0;
    cout << id1 << " ";;
    id1 = id1 + 9;
    cout << id1 << " ";;

}

int main() {
    fonk1();
    fonk2();

    cout << endl;

    fonk1();
    fonk2();

    cout << endl;

    system("PAUSE");

    return 0;
}

