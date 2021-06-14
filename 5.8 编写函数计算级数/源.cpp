#include<iostream>
using namespace std;
double fn(int);
void main(int n)
{
	cout << "求fn=1/2+2/3....+n/(n+1)\n请输入n:";
	cin >> n;
	cout<<"f"<<n<<"="<<fn(n);
}
double fn(int x)
{
	double sum = 0;
	if (x == 1)
		sum = double(1) / 2;
	else
		sum = x / (double(x) + 1) + fn(x - 1);
	return sum;
}
