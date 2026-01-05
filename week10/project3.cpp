#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    char str1[50] = "Hello";
    char str2[] = " World";
    char str3[] = "Hello";

    strcat(str1, str2);
    cout << str1 << endl;

    char str4[50] = "Welcome";
    char str5[] = " Students";
    strncat(str4, str5, 4);
    cout << str4 << endl;

    int result = strcmp(str3, "Hello");
    if (result == 0)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    char numStr[] = "123";
    int num = atoi(numStr);
    cout << num << endl;

    int value = 45;
    char valueStr[10];
    sprintf(valueStr, "%d", value);
    cout << valueStr << endl;

    return 0;
}

