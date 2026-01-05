#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;


int loadData(const char filename[], int ids[], int scores[], int maxSize){
	ifstream fin("scores.txt");
    if (!fin) {
        cout << "Error: Could not open file.\n";
        return 0;
    }

    string header;
    getline(fin, header); 

    int count = 0;
    while (count < maxSize && fin >> ids[count]) {
        char comma;
        fin >> comma >> scores[count];
        count++;
    }

    fin.close();
    return count;
}

void printAll(int ids[], int scores[], int size){


    for (int i = 0; i < size; i++) {
        cout << "StudentID: " << ids[i]
             << "  Score: " << scores[i] << endl;
    }
}
void computeStats(int scores[], int size, double &average, int &minScore, int &maxScore){

                  

    if (size == 0) {
        average = 0;
        minScore = 0;
        maxScore = 0;
        return;
    }

    int sum = 0;
    minScore = maxScore = scores[0]; 

    for (int i = 0; i < size; i++) {
        sum += scores[i];
        if (scores[i] < minScore) minScore = scores[i];
        if (scores[i] > maxScore) maxScore = scores[i];
    }

    average = static_cast<double>(sum) / size;
}


int main() {
    
    srand(time(0));

    
    int ids[100];
    int scores[100];

    
    int size = loadData("scores.txt", ids, scores, 100);

    
    cout << "Total students: " << size << endl << endl;

    
    printAll(ids, scores, size);
    cout << endl;

   
    double average;
    int minScore, maxScore;
    computeStats(scores, size, average, minScore, maxScore);

    cout << "Average Score: " << average << endl;
    cout << "Minimum Score: " << minScore << endl;
    cout << "Maximum Score: " << maxScore << endl;

    return 0;
} 
