#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if ((number % 2 != 0) && (number % 3 == 0))
        cout << "The number is odd and divisible by 3";
    else
        cout << "The number does not satisfy both conditions";

    return 0;
}
