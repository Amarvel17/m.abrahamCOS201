#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Input two integers
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    // Display values before swap
    cout << "\nBefore swapping:\n";
    cout << "a = " << a << ", b = " << b << endl;

    // Swap using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display values after swap
    cout << "\nAfter swapping:\n";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

