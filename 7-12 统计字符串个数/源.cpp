#include <iostream>
#include <string>
using namespace std;


int *count( const char *arr ) {
	//cout<<*++arr<<endl;
	int a[10]; // 记录1-9出现的数字个数
	// init
	for (int i = 0; i < 10; i++) {
		a[i] = 0;
		}
	//cout<<*arr<<endl;
	/*cout<<sizeof(arr )<<endl;
	cout<<sizeof(char )<<endl;
	cout<<sizeof(int )<<endl;*/
	while (*arr) {
		//int temp = *arr-48;
		//cout<<temp<<" ";
		for (int j = 0; j < 10; j++) {
			if ((*arr-48) == (char)j) {
				a[j]++;
				break;
				}
		}
		arr++;
		}
	for (int i = 0; i < 10; i++) {
		cout<<a[i]<<" ";
		}
	return a;
}



int main ( ) {
	string a = "46498731";
	//char *p = &a.begin( );
	//const char *p = a.data( );
	// date()指向第一个元素的const指针
	count(a.data( ));
	system("pause" );
	return 0;
	}
