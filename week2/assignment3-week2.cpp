#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, salesTax;

    // Ask the user for the total purchase amount
    cout << "Enter the total purchase amount: $";
    cin >> purchaseAmount;

    // Calculate sales tax at 6%
    salesTax = purchaseAmount * 0.06;

    // Display the result
    cout << "Sales tax (6%): $" << salesTax << endl;

    return 0;
}

