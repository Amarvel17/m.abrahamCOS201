#include <iostream>
#include <string>
using namespace std;


int main(){
	int sum = 0;
	int i, j;
	
	for (i=1; i<=2; i++){
		for(j=1; j<=3; j++){
			sum = sum + i + j;
		}
	}
	cout<<"The sum is "<<sum;
}
