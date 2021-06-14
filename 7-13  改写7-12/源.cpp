#include <iostream>
#include <string>
using namespace std;
// counts数组用来存入1-9的数字出现的个数，size表示counts数字元素个数的大小
void count ( string &s,int counts[],int size) {
	char p[20];
	strcpy_s(p,s.c_str());
	// init counts数组里所有的元素初始化为0;
	for (int i = 0; i < size; i++) {
		counts[i] = 0;
		}
	// s 中的元素遍历 ， 便于比较
	for (int i = 0; i < s.length(); i++) {
		cout<<p[i]<<" ";
		}
	cout<<endl;
	for (int i = 0; i < s.length( ); i++) {
		for (int j = 0; j < 10; j++) {
			if ((p[i]-48) == j) {
				// -48 将字符换到数字
				counts[j]++;
				break;
				}
			}
		}
	// traversal countsa
	cout<<"执行完毕后的counts数组结果："<<endl;
	for (int i = 0; i < size; i++) {
		cout<<counts[i]<<" ";
		}
	cout<<endl;
	}
int main ( void ) {
	string s= {"13246464"};
	int counts[10];
	count(s,counts,10);
	system("pause" );
	return 0;

	}
