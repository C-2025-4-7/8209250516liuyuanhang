#include <iostream>
using namespace std;
class Point {
private:
		int x, y;
public:
	Point() {//将x、y坐标值初始化为（60, 80）
		x = 60;
		y = 80;
	}
	Point(int a, int b) {//利用构造函数传递参数
		x = a;
		y = b;
	}
	void setPoint(int i,int j) {//创建公有成员函数void setPoint(int i, int j)将坐标值修改为(60 + i, 80 + j)
		x = 60+i;
		y = 80+j;
	}
	void display() {//输出修改后的坐标值
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
};
int main() {
	Point p1;
	p1.display();//验证x、y坐标值初始化为（60, 80）
	Point p2(10, 20);
	p2.display();//验证利用构造函数传递参数
	Point p3;
	int i , j ;
	cin>>i>> j ;
	p3.setPoint(i,j);
	p3.display();//验证将坐标值修改为(60 + i, 80 + j)
	return 0;
}