





































































int main(){
	//  ofstream ==> write to a file ie output
	//  ifstream ==> read from file ie input
    //  fstream ==> read and write
    
    ofstream outfile("data.txt");
	// the above helps us to create and name the file data.txt
	
	if(!outfile){
		cout<<"Error opening this file";
		return 0;
	}   
	
	// to write into the file :
	
	outfile << "Welcome to C++ class ;)\n";
	outfile << "This is FILE HANDLING CLASS\n";
	outfile.close(); //closes the file
	
	cout << "done";
	
    
}
