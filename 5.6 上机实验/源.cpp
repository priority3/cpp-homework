#include<iostream>
using namespace std;
long func(int n)
{
	int k;
	if (n < 2) k = 1;
	else k = func(n - 1) + func(n - 2);
	return k;
}
int main()
{
	for (int i = 0;i < 7;i++)
		cout << func(i) << " ";
	return 0;
}
