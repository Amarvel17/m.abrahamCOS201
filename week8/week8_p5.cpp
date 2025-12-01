#include <iostream>
#include <string>
using namespace std;

void nprint(string statement, int count){
	
	for (int i=1; i<=count; i++){
		cout<<statement<<endl;
	}
	
}
int main(){
	nprint("Welcome to C++ class", 5   );
}
