#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	
	ifstream infile("data.txt"); //reading from a file, hence ifstream
	
	if(!infile){
		cout << "This file cannot be opened";
		return 0;
	}
	string line;
	int count = 0; //initializing the number of lines
	while(getline(infile, line)){
		cout<<line<<endl;
		count++;
	}
	cout << "Number of lines is/are "<<count<<endl;
	infile.close();
	
	cout<<"done";
}
