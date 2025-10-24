#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	cout << "Enter your full name"<<endl;
	getline(cin, name);
	bool student;
	cout << "Are you a student in PAU? Enter 1 is yes, and 0 if no"<<endl;
	cin >> student;
	int course;
	cout << "What is your course choice, choose from 1-5"<<endl;
	cin >> course;
	int location;
	cout << "What is your hostel location choice, choose from 1-5"<<endl;
	cin >> location;
	
	if (student == 1) {
	   if (course == 1)	{
	   	cout << "Days = 3"<<endl;
	   	cout << "Registration fee = 10,000"<<endl;
	   }
	   else if (course == 2){
	   	cout << "Days = 5"<<endl;
	   	cout << "Registration fee = 8,000"<<endl;
	   }
	}
	else{
		cout << "BYE!"
	}
	
}
