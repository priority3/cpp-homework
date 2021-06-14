#include <iostream>
using namespace std;

int  factorial(int a)
	{
	int sum = 0;
	while (a--)
		{
		sum += a;
		}
	return sum;
	}

int main()
	{
	int sum = 0;
	for (int i = 1; i < 21; i++)
		{
		sum += factorial(i);
		}
	cout<<sum<<endl;
	system("pause");
	return 0;
	}
