#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
	ifstream infile("data.txt");
	
	if (!infile)
	{
		cout<< "Cannot read file";
		return 0;
	}
	
	string line;
	while(getline(infile, line))
	{
		cout<<line<<"\n";
	}
	
	infile.close();
} 
