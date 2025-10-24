#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

srand(time(0));
	cout<<rand()%10;
	
	
	
	
	srand(time(0));
	int num1 = rand() % 10;
	int num2 = rand() % 10;
	int answer;
	
	cout << "Number 1 is : "<<num1<<endl;
	cout << "Number 2 is : "<<num2<<endl;
	if (num1 < num2){
		int num = num1;
		num1 = num2;
		num2 = num;
		cout << "New Number 1 is : "<<num1<<endl;
	    cout << "New Number 2 is : "<<num2<<endl;
	}
	cout << "Whats num1 - num2"<<endl;
	cin >> answer;
	if (answer == (num1 - num2)){
		cout << "You are correct"<<endl;
	}
	else {
		cout << "You are incorrect"<<endl;
	}
	
}


