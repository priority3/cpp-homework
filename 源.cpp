#include <iostream>
#include <ctime>
using namespace std;

int main ( void ) {
	srand(time(0) );

	while (1) {
		int x;
		cin>>x;
		if (x == 0) {
			break;
			}
		else {
			cout<<rand()<<"  ";
			}
		}

	}
