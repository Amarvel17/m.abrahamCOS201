#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
	fstream file("data.txt", ios::out | ios::app);
	file<< "Adding a new line\n";
	file.close();
	cout<<"Done!\n"; 
	
	
} 
