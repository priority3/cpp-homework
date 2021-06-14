#include <iostream>
#include<iomanip>
// 用于格式化输出
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h;
	cout << "求0~1000中的正整数的位数和\n" << "请输入一个属于0~1000的正整数：";
	cin >> a;
	b = a % 10;
	c = (a - b) / 10;
	d = c % 10;
	e = (c - d) / 10;
	f = e % 10;
	g = (e - f) / 10;
	h= b + d + f + g;
	cout <<a<< "的位数和为："<<h<<endl;
	return 0;
	system("pause");
}
