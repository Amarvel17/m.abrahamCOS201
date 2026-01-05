#include <iostream>
using namespace std;

int main() {
    int arr[8] = {12, 5, 18, 7, 3, 10, 15, 6};

    int max = arr[0];
    int minIndex = 0;

    for (int i = 1; i < 8; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    cout << "Largest element: " << max << endl;
    cout << "Index of smallest element: " << minIndex << endl;

    return 0;
}

