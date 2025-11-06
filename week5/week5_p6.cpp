#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	cout<<"Multiplication Table \n";
	cout<<"================= \n";
	
	for (int i=1; i<13; i++){
	
	cout<< setw(6)<<i;
	
}
cout<<"\n";
    for (int j = 1; j<13; j++){
    	cout<<j<<"  | ";
    	for (int k = 1; k<13; k++);{
		cout<< setw(6)<< j*k;
		}
    	cout<<"\n";
	}
}
