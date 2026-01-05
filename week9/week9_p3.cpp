#include <iostream>
#include <fstream>
using namespace std;

int main(){
		//reading strings from file

	fstream file("data.txt", ios::out | ios::app); 
	// ios::out ==> write mode, 
	//ios::app ==> append mode ie adding things to the existing text , 
	//ios::trunc ==> erase all file contents before writimg something new,
	//ios::in ==> read mode
	
	file<<"Please add this new line\n";
	file.close();
	cout <<"done";
	
}
