#include <iostream>
#include <cmath>

using namespace std;

int main()
	{
	double c ;
	cin >> c;
	if (c<0) {
			return 0;
		}
	double err =1e-15; // 误差
	double x = c;
	double y = (x+c/x)/2; // 迭代公式
	while (abs(x-y)>err) {
		x = y ;
		y = (x+c/x)/2;
	}
//		while (Math.abs(x-c/2)/2 > err) {
//			x = (x+c/x)/2.0;
//		}
	// 无需另设y
	cout <<x<<endl;

	system("pause");
	return 0;
}
