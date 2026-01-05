#include <iostream>
#include <fstream>
using namespace std;
int main(){
	//reading integers from file
	ifstream infile("score.txt");
	
	if (!infile){
		cout<<"File cannot be opened";
		return 0;
	}
	
	int number;
	int sum = 0;
	while(infile >> number){    //key point
		cout<<number<<endl;
		sum = sum + number;
	}
	cout<<"The sum is "<<sum<<endl;
	infile.close();
	
}
