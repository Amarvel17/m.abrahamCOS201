#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "What's your array size ==> ";
    cin >> n;

    int arr[n];

    srand(time(0));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 21;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = arr[0], min = arr[0];
    int maxIndex = 0, minIndex = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    cout << "Max value is " << max << " Max index is " << maxIndex << endl;
    cout << "Min value is " << min << " Min index is " << minIndex << endl;
    cout << "Sum of elements in the array is " << sum << endl;

    int key;
    cout << "Input a random number to find in the array ==> ";
    cin >> key;

    int foundIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            foundIndex = i;
            break;
        }
        else {
        	return 0;
		}
    }

    cout << "The index of your inputted value is " << foundIndex << endl;

    return 0;
}


