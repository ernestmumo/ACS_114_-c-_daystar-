#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a=5,b=10,temp;
	cout<<"Before swapping."<<endl;
	cout<<"a="<<a<<",b="<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"a="<<a<<",b="<<b<<endl;
	return 0;
}
