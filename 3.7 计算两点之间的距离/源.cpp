#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<"请输入两点的坐标："<<endl;
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<"两点之间的距离平方和为："<<(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)<<endl;;
	system("pause");
	return 0;
}
