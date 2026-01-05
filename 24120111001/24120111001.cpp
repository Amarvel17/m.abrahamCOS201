#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int loadData(const char filename[], int ids[], int scores[], int maxSize){
    ifstream myfile(filename);
    string temp;
    int i = 0;
    if(!myfile) 
    return 0;
    
    myfile.ignore(1000, '\n'); 
    

    while(i < maxSize && myfile >> ids[i]){
        myfile.ignore(1000, ','); 
        myfile >> scores[i];
        myfile.ignore(1000, '\n');
        ++i;
    }

    return i;
}

void printAll(int ids[], int scores[], int size){
    for(int i=0; i<size; i++)
        cout << "StudentID: " << ids[i] << "   Score: " << scores[i] << endl;
}

void computeStats(int scores[], int size, double &avg, int &mn, int &mx){
    int sum = 0;
    mn = scores[0];
    mx = scores[0];
    
    for(int i=0; i<size; i++){
        sum += scores[i];
        
        if(scores[i] < mn) 
        mn = scores[i];
        
        if(scores[i] > mx)
         mx = scores[i];
    }
    
    avg = double(sum) / size;
}

void computeGradeDistribution(int scores[], int size, int &A, int &B, int &C, int &D, int &F){
    A = B = C = D = F = 0;
    for(int i=0; i<size; i++){
        int s = scores[i];
        
        if(s>=70) 
        A++;
        
        else if(s>=60) 
        B++;
        
        else if(s>=50) 
        C++;
        
        else if(s>=45) 
        D++;
        
        else 
        F++;
    }
}

int pickRandomPassingStudent(int ids[], int scores[], int size){
    int pass[100], n=0;
    
    for(int i=0; i<size; i++)
        if(scores[i] >= 50) pass[n++] = i;
    if(n==0) 
    return -1;
    return pass[rand() % n];
}

void saveSummary(const char filename[], double avg, int mn, int mx, int A, int B, int C, int D, int F){
    ofstream myfile(filename);
    myfile << "Metric,Value\n";
    myfile << "Number of Students," << (A+B+C+D+F) << "\n";
    myfile << "Average Score," << avg << "\n";
    myfile << "Minimum Score," << mn << "\n";
    myfile << "Maximum Score," << mx << "\n";
    myfile << "A Count," << A << "\n";
    myfile << "B Count," << B << "\n";
    myfile << "C Count," << C << "\n";
    myfile << "D Count," << D << "\n";
    myfile << "F Count," << F << "\n";
}

int main(){
    int ids[100], scores[100];
    double avg;
    int mn, mx, A, B, C, D, F;
    srand(time(0));

    int size = loadData("scores.csv", ids, scores, 100);
    cout << "Total Students: " << size << endl;

    printAll(ids, scores, size);

    computeStats(scores, size, avg, mn, mx);
    
    computeGradeDistribution(scores, size, A, B, C, D, F);

    cout << "Average: " << avg << endl;
    cout << "Min: " << mn << endl;
    cout << "Max: " << mx << endl;
    cout << "A: " << A << " B: " << B << " C: " << C << " D: " << D << " F: " << F << endl;

    int idx = pickRandomPassingStudent(ids, scores, size);
    if(idx == -1) cout << "No passing student\n";
    else cout << "Random Passing Student: " << ids[idx] << " Score: " << scores[idx] << endl;

    saveSummary("Summary.csv", avg, mn, mx, A, B, C, D, F);
    cout << "Summary.csv created\n";
}

