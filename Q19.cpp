#include <iostream>
using namespace std;

int binaryToDecimal(long long binary) {
    int decimal = 0;
    int base = 1;

    while (binary > 0) {
        int lastDigit = binary % 10;

        decimal += lastDigit * base;

        base *= 2;

        binary /= 10;
    }

    return decimal;
}

int main() {
    long long binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);

    cout << "Decimal = " << decimal << endl;

    cout << "Octal = " << oct << decimal << endl;

    cout << "Hexadecimal = " << hex << uppercase << decimal;

    return 0;
}
