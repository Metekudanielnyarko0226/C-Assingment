#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter first floating-point number: ";
    cin >> num1;

    cout << "Enter second floating-point number: ";
    cin >> num2;

    float larger = (num1 > num2) ? num1 : num2;

    cout << "Larger number = " << larger;

    return 0;
}
