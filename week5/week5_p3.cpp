#include <iostream>
using namespace std;

int main(){
	int i = 1;
	int sum = 0;
	
	while(i<=9){
		sum = sum + i;
		cout<<"When i = "<<i<< "The sum is "<<sum<<endl  ;
		i++;
	}
	cout<<"sum is " <<sum;
}
