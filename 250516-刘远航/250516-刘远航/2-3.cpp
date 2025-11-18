#include <iostream>
using namespace std;
int main() {
cout << "请输入三角形的三条边长：" << endl;
double a, b, c;
cin >> a >> b >> c;
if (a>0&&b>0&&c>0&&a + b > c && a + c > b && b + c > a) {
	double C = a + b + c;
	cout << "三角形的周长为：" << C << endl;
	if(a==b&&b==c){
		cout<<"三角形为等边三角形"<<endl;
	}
	else{
		cout<<"三角形为不等边三角形"<<endl;
	}
} else {
	cout << "无法构成三角形！" << endl;
	}
return 0;
}