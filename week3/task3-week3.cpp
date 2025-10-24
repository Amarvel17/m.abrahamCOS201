#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num1, num2, temp, difference;

    srand(time(0));

    num1 = rand() % 10;
    num2 = rand() % 10;

    if (num1 < num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << "What is num1 - num2? : ";
    cin >> difference;
    
    if (difference == (num1 - num2))
        cout << "Correct!" << endl;
    else
        cout << "Incorrect. The correct answer is " << (num1 - num2) << "." << endl;

    return 0;
}

