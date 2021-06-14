#include <iostream>
using namespace std;


int *func ( const int *arr, int size ) {
	return new int (size*2);
	}
int main( ) {
	int a[2];
	cout<<sizeof(a )/sizeof(a[0] )<<endl;
	int *NewArr = func(a,2);
	system("pause" );
	return 0 ;
	}
