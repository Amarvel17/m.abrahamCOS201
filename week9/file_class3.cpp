#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
	ifstream myfile("score.txt");
	if (!myfile)
	{ 
	  cout<<"Error!\n";
	  return 0;
	}
	int number;
	int sum = 0;
	int max = 0;
	int min = 0;
	
	while (myfile >> number)
	{ 
	  cout<<number<<"\n";
	  sum = sum + number;
	  while (max<number){
	  	max = number;
	  }
	  
	  while (max>min)
	  { 
       min<number;
       
	  }
	}
	cout<<"The sum is "<<sum<<"\n";
	cout<<"The max is "<<max<<"\n";
	cout<<"The min is "<<min<<"\n";
	
	myfile.close();
}
