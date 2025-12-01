#include <iostream>
#include <string>
using namespace std;

int main(){
	int base_tuition = 1500000;
	int score, age, house;
	string name;
	double waec;
	bool choice, record, admitted;
	cout<<"Enter your full name: "<<endl;
	getline(cin, name);
	cout<<"Enter your JAMB score (between 0 - 400): "<<endl;
	cin>>score;
	cout<<"Enter your WAEC average: "<<endl;
	cin>>waec;
	cout<<"Enter your age: "<<endl;
	cin>>age;
	cout<<"Was PAU your first choice? ( 1 for yes and 0 for no): "<<endl;
	cin>>choice;
	cout<<"Do you have any disciplinary record? ( 1 for yes and 0 for no): "<<endl;
	cin>>record;
	cout<<"Enter your hostel choice: "<<endl;
	cout<<"1. Main hostel - 180,000"<<endl;
	cout<<"2. Annex hostel - 120,000"<<endl;
	cout<<"3. Day student - 0"<<endl;
	cin>>house;
	
	if ((score>= 220 && waec >=60) && choice == true){
		cout<<"CONGRATULATIONS, YOU ARE GRANTED ADMISSION"<<endl;
		bool admitted = true;
	}
	else if(score>=220 && waec >= 70){
		cout<<"CONGRATULATIONS, YOU ARE GRANTED ADMISSION"<<endl;
		bool admitted = true;
	}
	else if(record == true || age < 15){
		cout<<"REJECTED, TRY AGAIN NEXT YEAR"<<endl;
		bool admitted = false;
	}
	else{
		cout<<"STATUS: PENDING"<<endl;
	}
	
	if(admitted == true){
		if(score>=320){
		 cout<<"CONGRATULATIONS, you get a 30% scholarship, your fees due now is "<<endl;
		}
	}
	
}
