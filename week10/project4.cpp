#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int scores[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter score for student " << i + 1 << ": ";
        cin >> scores[i];
    }

    int best = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > best)
            best = scores[i];
    }

    for (int i = 0; i < n; i++) {
        char grade;
        if (scores[i] >= best - 10)
            grade = 'A';
        else if (scores[i] >= best - 20)
            grade = 'B';
        else if (scores[i] >= best - 30)
            grade = 'C';
        else if (scores[i] >= best - 40)
            grade = 'D';
        else
            grade = 'F';

        cout << "Student " << i + 1 << " score is " << scores[i]
             << " and grade is " << grade << endl;
    }

    return 0;
}

