#include <iostream>
using namespace std;
// n个已排序的整数放于数组arr，将arr从第m位置开始的元素逆序
// 放入到另一个数组
int *invert( int arr[], int m, int n ) {
	int *NewArr = new int (n-m+1);
	int i = 0;
	while (n-m+1) {
		NewArr[i++] = arr[n-1];
		n--;
		}
	return NewArr;
	}

int main ( void ) {
	int arr[] = {1,4,6,7,9,10};
	int *p = invert(arr,4,6 );
	cout<<*p<<endl;
	p++;
	cout<<*p<<endl;
	p++;
	cout<<*p<<endl;
	system("pause" );
	return 0;
	}
