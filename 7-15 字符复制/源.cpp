#include <iostream>
#include <string>
using namespace std;
// 编写函数 将字符串s1中的第m个字符全部复制到另一个字符串当中
void StringCopy ( char *s2, char *s1, int m ) {
	int size = 0;
	int length = 4;
	// 计算s1  m之后的大小
	size = length - m+1;
	s1 = s1+m-1;
	// size为s2的大小
	cout<<size<<endl;
	for (int i = 0; i < size; i++) {
		(*s2++)= (*s1++);
		}
	}
void StringCopy ( string &s2, string &s1, int m ) {

	}

int main ( void ) {
	char a[] ="13035";
	char b[5];
	cout<<a<<endl;
	StringCopy(b,a,2 );
	for (int i = 0; i < 5; i++) {
		cout<<b[i]<<" ";
		}
	system("pause" );
	return 0;
	}
