#include <iostream>
using namespace std;
// a mn;b nk -> c mk;
void MatMultiply( int *A,int *B,int *C,int m,int n,int k ) {
	// 将b中的数按列存放进去
	int *temp = new int [n*k];
	int c_i = 0;
	int p = 0;
	// pn暂存n的大小
	int pn = n;
	while (pn--) {
		for (int i = p; i < n * k; i += k) {
			temp[c_i++] = B[i];
			}
		p++;
		}
	//此时temp中的值按照b列存储
	for (int i = 0; i < n * k; i++) {
		cout<<temp[i]<<" ";
		}
	//
	int sum = 0;
	for (int i = 0; i < m * k; i++) {
		for (int j = 0; j < m * n; j++) {

			}


		C[i] = sum;
		}
	}
int main ( void ) {
	int a[2][3] = {{1,2,3},{2,3,4}};
	int b[3][2] = {{1,2},{2,3},{1,4}};
	int c[2][2];
	MatMultiply(a[0],b[0],c[0],2,3,2);
	system("pause" );
	return 0;
	}
