#include <iostream>
using namespace std;
int main()
	{
	double sum = 0;
	double a1 = 1;
	double a2 = 2;
	double n = 0;
	while (n < 20)
		{
		sum += (a2/a1);
		n++;
		double temp = a2;
		a2 += a1;
		a1 = temp;
		}
	cout<<sum<<endl;
	system("pause");
	return 0;
	}
