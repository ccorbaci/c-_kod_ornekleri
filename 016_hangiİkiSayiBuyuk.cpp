#include <iostream>
using namespace std;

int getMax(int num1, int num2) {
    int result;

    if (num1 > num2) {
        result = num1;
    }
    else if (num1 == num2) {
        int equalValue = num1;
        result = equalValue;
    }
    else {
        result = num2;
    }

    return result;
}
int main() {
    int result = getMax(18, 5);

    if (result == 5) {
        cout << result;
    }
    else {
        cout << "The maximum value is: " << result;
    }

    return 0;
}
