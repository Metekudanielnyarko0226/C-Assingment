#include <iostream>
using namespace std;

int main() {
    int first, second;

    cout << "Enter first value: ";
    cin >> first;

    cout << "Enter second value: ";
    cin >> second;

    if (first > second)
        cout << "First value is greater";
    else
        cout << "Second value is greater";

    return 0;
}
