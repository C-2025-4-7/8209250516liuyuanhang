#include <iostream>
using namespace std;
int main() {
	cout<<"用迭代法求a的平方根"<<endl;
	double a, x0, x1;
	cout<<"请输入a的值：";
	cin>>a;
	x0 = a ;
	do {
		x1 = (x0 + a / x0) / 2; 
		if (abs(x1 - x0) < 1e-5) 
			break;
		x0 = x1;
	} while (true);
	cout<<"a的平方根约为："<<x1<<endl;
	return 0;
}