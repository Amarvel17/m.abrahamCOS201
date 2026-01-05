#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	ofstream outfile("data.txt");
	
	if(!outfile)
	{
		cout<<"Error opening file!";
		return 0;
	}
	
	outfile << "Welcome to C++\n";
	outfile << "This is file handling class\n";
	
	outfile.close();
	cout<< "File opened";
}
