#include <iostream>
#include <cmath>
using namespace std;
class Point {
public:
	int x,y;
	Point(int x,int y ):x(x ),y(y ){}
	Point( ) {

		}
	};
class Rectangle {
	Point leftup,downright; // 左上角点，右下角点
	double diagonal,perimeter; // 对角线长，周长
	static int COUNTER; // 矩形个数
	// 对角线
	double get_diagonal() {
		int sum = pow(this->leftup.x-this->downright.x,2)+pow(this->leftup.y-this->downright.y,2);
		this->diagonal = sum;
		return sqrt(sum);
		}
	// 周长
	double get_perimeter( ) {
		int sum = abs(2*(this->leftup.x-this->downright.x))+
			abs(2*(this->leftup.y-this->downright.y) );
		this->perimeter = sum;
		return sum;
		}
public:
	// 面积 chang kuang
	double area,length,width;
	// 得到坐标
	Point getLeftup( ) {
		cout<<this->leftup.x<<" "<<this->leftup.y<<endl;
		return leftup;
		}
	Point getLeftup( ) {
		cout<<this->downright.x<<" "<<this->downright.y<<endl;
		return downright;
		}
	// 得到长度
	double getDiag( ) {
		return this->get_diagonal( );
		}
	double getPerim( ) {
		return this->get_perimeter( );
		}

	// set
	void set_point_lefup( int x, int y ) {
		this->leftup = Point(x,y );
		}
	void set_point_downrig( int x, int y ) {
		this->downright = Point(x,y );
		}

	// 构造函数
	Rectangle( double area, double diag, double peri, Point leftup = Point(0,0), Point downright = Point(1,1 )
			   , double width = 0, double length = 0 ){
		this->area = area;
		this->diagonal = diag;
		this->perimeter = peri;
		this->leftup = leftup;
		this->downright = downright;
		this->width = width;
		this->length = length;
		this->COUNTER++;
		}
	};


int main ( void ) {

	}
