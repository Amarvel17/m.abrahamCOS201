#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Input an integer: ";
    cin >> number;

    if (number % 5 == 0)
	{
        cout << "HIFive";
    } 
	else if (number % 2 == 0) 
	{
        cout << "HIEven";
    }
    else
    {
    	cout<< "HIOdd";
	}

    return 0;
}


