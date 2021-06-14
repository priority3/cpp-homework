#include <iostream>
using namespace std;

//
void MatAdd( int (*arr1)[3],int (*arr2)[3],int (*arr3)[3],int row,int col) {

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr3[i][j] = arr1[i][j]+arr2[i][j];
			}
		}
	return ;
	}

int main ( void ) {
	int a[2][3] = {{1,2,3},{2,3,4}};
	int b[2][3] = {{2,3,4},{3,4,5}};
	int c[2][3];
	cout<<"初始a数组："<<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout<<a[i][j]<<" ";
			}
		cout<<endl;
		}
	cout<<"初始b数组："<<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout<<b[i][j]<<" ";
			}
		cout<<endl;
		}
	MatAdd(a,b,c,2,3 );
	cout<<"相加过后的值："<<endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout<<c[i][j]<<" ";
			}
		cout<<endl;
		}

	system("pause" );
	return 0;
	}
