#include <iostream>
using namespace std;

int main ( void ) {
	string week[] = {"星期一","星期二","星期三","星期四",
					 "星期五","星期六","星期天"};
	cout<<"请输出日期:"<<endl;
	while (true) {
		int a;
		cin>>a;
		cout<<week[a-1]<<endl;
		if (a == 0) {
			break;
			}
		}
	system("cls" ); // 清屏
	system("pause" );
	return 0;


	}
