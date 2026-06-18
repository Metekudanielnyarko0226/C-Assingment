#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0 && (number & (number - 1)) == 0)
        cout << number << " is a power of 2";
    else
        cout << number << " is not a power of 2";

    return 0;
}
