#include <iostream>
using namespace std;

int main() {
    int list1[] = {2, 3, 8, 10};
    int list2[] = {1, 7, 9, 11, 13};
    int list3[9];

    merge(list1, 4, list2, 5, list3);

    for (int i = 0; i < 9; i++)
        cout << list3[i] << " ";

    return 0;
}

