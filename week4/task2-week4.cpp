#include <iostream>
using namespace std;

int main()
{
	int i = 10;
	int sum = 0;
	do
	{
		sum = sum + i;
		i++;
	}
	while (i<10);
	cout<<"The sum is "<< sum <<"";
	cin>>sum;
}
