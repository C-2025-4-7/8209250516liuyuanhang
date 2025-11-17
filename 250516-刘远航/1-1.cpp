#include <iostream>
using namespace std;
int main() {
	int i = k + 1;//未定义k
	cout<<i++<<endl;//输出i的值，然后i自增1
	int i =  1;//重新定义i
	cout << i++ << endl;//输出i的值，然后i自增1
	cout << "Welcome to C++ !"<< endl;//输出欢迎信息
	return 0;
}