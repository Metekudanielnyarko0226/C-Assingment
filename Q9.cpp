#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    (num1 > num2)
        ? cout << "Larger number = " << num1
        : cout << "Larger number = " << num2;

    return 0;
}
