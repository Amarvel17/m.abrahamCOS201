#include <iostream>
using namespace std;

int max(int num1, int num2){
	int max_numb;
	if(num1>num2){
		max_numb = num1;
	}
	else{
		max_numb = num2;
	}
	return max_numb;
}

int main(){
	int result;
	result = max(120, 160);
	cout<<"the max number "<<result;
}
