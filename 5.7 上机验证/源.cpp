#include <iostream>
using namespace std;
int func(int &x, int y)
	{
	x++;
	y++;
	return x+y;
	}

int main(void)
	{
	int a=2;
	int b=3;
	int r = func(++a,b--);
	cout<<"a="<<a<<"b="<<b<<"r="<<r<<endl;
	system("pause");
	return 0;
	}
