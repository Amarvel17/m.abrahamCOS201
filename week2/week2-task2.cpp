#include <iostream>
using namespace std;

int main()
{
	// Enter a degree in Fahrenheit
	double fahrenheit;
	cout<< "Enter a degree in Fahrenheit: ";
	cin >> fahrenheit;
	
	// Obtain a celsius degree
	double celsius = (5.0/9)*(fahrenheit-32);
	
	// Display result
	cout << "Fahrenheit " << fahrenheit << " is " << celsius << " in celsius " << endl;
	
	
	
	//Enter a degree in Celcius
	double Celsius2;
	cout<< "Enter a degree in Celsius: ";
	cin >> Celsius2;
	
	// Obtain a fahrenheit degree
	double fahrenheit2 = (9/5.0)*(Celsius2 + 32);
	
	// Display result
	cout << " Celsius2 " << Celsius2 << " is " << fahrenheit << " in fahrenheit2 " << endl;
	return 0;
}
