#include <iostream>
using namespace std;

int main() 
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
	{
        cout << "You are an adult";
    } 
	else 
	{
        cout << "You are NOT an adult";
    }

    return 0;
}

