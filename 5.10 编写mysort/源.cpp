#include <iostream>
using namespace std;

int main(void)
	{
		int a[3][4];
		int *p = a[2];
		// int **p = a;
		// 这里的a 相当于 (a*)[4]
		int (*p)[4] = a;
		system("pause");
		return 0;
	}
