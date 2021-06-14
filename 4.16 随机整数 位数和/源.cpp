#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	cout << "随机生成[100,1000]中6个整数\n";
	srand(time(0));
	int  b,c,d,sum;
	double a;
	for (b = 1;b <= 6;b++)
	{
		a = rand() / double(RAND_MAX);
		c = a * 900 + 100;
		cout << "随机数为：" << c;
		for (sum=0;c > 1;c/=10)
		{
			d = c % 10;
			sum += d;
		}
		 cout<< "\t位数和为：" << sum << endl;
	}
	return 0;
	system("pause");
}
