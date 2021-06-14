#include <iostream>
#include <cmath>
using namespace std;
#define ERR (1e-5) // 误差
double newton ( double c ) {
	if (c < 0) {
		return c;
		}
	double x = c;
	double y = ( x + c/x)/2; // 迭代公式
	while ( abs(x-y) > ERR ) {
		x = y;
		y = (x+c/x)/2;
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
