#include <iostream>
#include <cmath>
using namespace std;
#define ERR (1e-5) // 误差
double newton ( double x ) {
	if (x < 0) {
		return ;
		}
	double c = x;
	double y = ( c + x/c)/2; // 迭代公式
	while ( abs(x-y) > ERR ) {
		x = y;
		y = (c+x/c)/2;
		}
	return x;
	}

int main ( void ) {
	double x;
	cin>>x;
	cout<<newton(x )<<endl;
	system("pause" );
	return 0;
	}
