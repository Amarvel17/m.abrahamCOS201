#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	int i;
	int j;
	for (i=1; i<6; i++){
		for(j=2; j<=3; j++){
		
		sum = sum + i + j;
		cout<< "When i is "<<i<<" The sum is "<<sum<<endl;
	    }
    }
}
