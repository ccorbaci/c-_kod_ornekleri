#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    char choice = 'e';

    while (choice == 'e' || choice == 'E') {
        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter operator:";
        cin >> op;

        cout << "Enter the second number: ";
        cin >> num2;

        if (op == '+') {
            cout << num1 + num2 << endl;

        }else if (op == '-') {
            cout << num1 - num2 << endl;

        }else if (op == '*') {
            cout << num1 * num2 << endl;

        }else if (op == '/') {
            cout << num1 / num2 << endl;

        }else {
            cout << "Wrong op!!" << endl;
        }

        cout << "Do you want to continue? (e/E for Yes, any other key for No): ";
        cin >> choice;
    }

    return 0;
}
