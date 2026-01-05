#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target);

int main() {
    int arr[8] = {3, 6, 7, 10, 12, 15, 18, 20};
    int target = 10;

    int index = binarySearch(arr, 8, target);

    if (index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}

