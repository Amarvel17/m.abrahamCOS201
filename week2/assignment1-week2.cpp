#include <iostream>
using namespace std;

int main() {
    // Declare two variables to store user input
    int num1, num2;

    // Ask the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate and print the sum, difference, and product
    cout << "Sum: " << (num1 + num2) << endl;
    cout << "Difference: " << (num1 - num2) << endl;
    cout << "Product: " << (num1 * num2) << endl;

    return 0;
}

