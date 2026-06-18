#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, remainder, power = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        remainder = binary % 10;

        decimal += remainder * pow(2, power);

        binary /= 10;
        power++;
    }

    cout << "Decimal equivalent = " << decimal;

    return 0;
}
